/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:59:19 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 19:12:22 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

void	push_chunk_to_b(t_stack **a, t_stack **b, int chunk_min, int chunk_max)
{
	int	median;
	int	size;

	median = (chunk_min + chunk_max) / 2;
	size = list_size(a);
	while (size-- > 0)
	{
		if ((*a)->index >= chunk_min && (*a)->index <= chunk_max)
		{
			pb(a, b);
			if (*b && (*b)->index < median && list_size(b) > 1)
				rb(b);
		}
		else
			ra(a);
	}
}

void	push_max_to_a(t_stack **a, t_stack **b)
{
	int	max_pos;
	int	size;

	max_pos = find_max_index_pos(b);
	size = list_size(b);
	if (max_pos <= size / 2)
	{
		while (max_pos-- > 0)
			rb(b);
	}
	else
	{
		max_pos = size - max_pos;
		while (max_pos-- > 0)
			rrb(b);
	}
	pa(a, b);
}

static int	prepare_sort(t_stack **a)
{
	int	*sorted;
	int	size;

	size = list_size(a);
	sorted = malloc(sizeof(int) * size);
	if (!sorted)
		return (-1);
	stack_to_array(*a, sorted);
	sort_array(sorted, size);
	assign_index(*a, sorted, size);
	free(sorted);
	return (size);
}

static void	push_all_chunks(t_stack **a, t_stack **b, int size)
{
	int	chunk_count;
	int	chunk_size;
	int	i;
	int	chunk_min;
	int	chunk_max;

	chunk_count = get_chunk_count(size);
	chunk_size = (size + chunk_count - 1) / chunk_count;
	i = 0;
	while (i < chunk_count)
	{
		chunk_min = i * chunk_size;
		chunk_max = (i + 1) * chunk_size - 1;
		if (chunk_max >= size)
			chunk_max = size - 1;
		push_chunk_to_b(a, b, chunk_min, chunk_max);
		i++;
	}
}

void	chunk_sort(t_stack **a, t_stack **b)
{
	int	size;

	size = prepare_sort(a);
	if (size <= 0)
		return ;
	push_all_chunks(a, b, size);
	while (*b)
		push_max_to_a(a, b);
}
