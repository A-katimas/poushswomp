/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:59:19 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/23 12:10:24 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

void	stack_to_array(t_stack *a, int *arr)
{
	int		i;
	t_stack	*start;

	if (!a)
		return ;
	i = 0;
	start = a;
	arr[i++] = a->data;
	a = a->next;
	while (a != start)
	{
		arr[i++] = a->data;
		a = a->next;
	}
}

void	sort_array(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	assign_index(t_stack *a, int *sorted, int size)
{
	t_stack	*tmp;
	t_stack	*start;
	int		i;

	if (!a)
		return ;
	start = a;
	tmp = a;
	i = 0;
	while (i < size)
	{
		if (tmp->data == sorted[i])
		{
			tmp->index = i;
			break ;
		}
		i++;
	}
	tmp = tmp->next;
	while (tmp != start)
	{
		i = 0;
		while (i < size)
		{
			if (tmp->data == sorted[i])
			{
				tmp->index = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}


static int	get_chunk_count(int size)
{
	if (size <= 10)
		return (1);
	if (size <= 100)
		return (5);
	if (size <= 500)
		return (11);
	return (15);
}

static void	push_chunk_to_b(t_stack **a, t_stack **b, int chunk_max)
{
	int	median;
	int	size;
	int	pushed;

	median = chunk_max / 2;
	size = lenlist(a);
	pushed = 0;
	while (size-- > 0)
	{
		if ((*a)->index <= chunk_max)
		{
			pb(a, b);
			pushed++;
			if (*b && (*b)->index < median && lenlist(b) > 1)
				rb(b);
		}
		else
			ra(a);
	}
}

static int	find_max_index_pos(t_stack **b)
{
	t_stack	*tmp;
	int		max_index;
	int		pos;
	int		max_pos;

	tmp = *b;
	max_index = tmp->index;
	pos = 0;
	max_pos = 0;
	while (tmp->next != *b)
	{
		if (tmp->index > max_index)
		{
			max_index = tmp->index;
			max_pos = pos;
		}
		tmp = tmp->next;
		pos++;
	}
	if (tmp->index > max_index)
		max_pos = pos;
	return (max_pos);
}

static void	push_max_to_a(t_stack **a, t_stack **b)
{
	int	max_pos;
	int	size;

	max_pos = find_max_index_pos(b);
	size = lenlist(b);
	if (max_pos <= size / 2)
	{
		while (max_pos-- > 0)
			rb(b);
	}
	else
	{
		while (max_pos++ < size)
			rrb(b);
	}
	pa(a, b);
}

void	chunk_sort(t_stack **a, t_stack **b)
{
	int	*sorted;
	int	size;
	int	chunk_count;
	int	chunk_size;
	int	i;

	size = lenlist(a);
	sorted = malloc(sizeof(int) * size);
	if (!sorted)
		return ;
	stack_to_array(*a, sorted);
	sort_array(sorted, size);
	assign_index(*a, sorted, size);
	free(sorted);
	chunk_count = get_chunk_count(size);
	chunk_size = size / chunk_count;
	i = 0;
	while (i < chunk_count)
	{
		push_chunk_to_b(a, b, (i + 1) * chunk_size + i * 2);
		i++;
	}
	while (*b)
		push_max_to_a(a, b);
}
