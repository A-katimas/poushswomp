/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_LSD.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:08:51 by aheno             #+#    #+#             */
/*   Updated: 2026/02/04 19:12:22 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

static int	prepare_indices(t_stack **a)
{
	int	*sorted;
	int	size;

	size = list_size(a);
	if (size <= 0)
		return (0);
	sorted = malloc(sizeof(int) * size);
	if (!sorted)
		return (-1);
	stack_to_array(*a, sorted);
	sort_array(sorted, size);
	assign_index(*a, sorted, size);
	free(sorted);
	return (size);
}

static int	max_bits_needed(int max_index)
{
	int	bits;

	bits = 0;
	while ((max_index >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_lsd(t_stack **a, t_stack **b)
{
	int	size;
	int	max_bits;
	int	bit;
	int	i;

	size = prepare_indices(a);
	if (size <= 1)
		return ;
	max_bits = max_bits_needed(size - 1);
	bit = 0;
	while (bit < max_bits)
	{
		i = 0;
		while (i < size)
		{
			if (((*a)->index >> bit) & 1)
				ra(a);
			else
				pb(a, b);
			i++;
		}
		while (*b)
			pa(a, b);
		bit++;
	}
}
