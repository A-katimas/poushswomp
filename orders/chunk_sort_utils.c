/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:24:15 by aheno             #+#    #+#             */
/*   Updated: 2026/01/23 16:18:03 by aheno            ###   ########.fr       */
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

static int	find_index(int value, int *sorted, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (sorted[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

void	assign_index(t_stack *a, int *sorted, int size)
{
	t_stack	*tmp;

	if (!a)
		return ;
	tmp = a;
	while (1)
	{
		tmp->index = find_index(tmp->data, sorted, size);
		tmp = tmp->next;
		if (tmp == a)
			break ;
	}
}

int	find_max_index_pos(t_stack **b)
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
