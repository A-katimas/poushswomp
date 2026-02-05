/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:10:00 by aheno             #+#    #+#             */
/*   Updated: 2026/02/05 16:23:08 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

static int	get_min_pos(t_stack **a, int min)
{
	t_stack	*tmp;
	int		pos;

	tmp = *a;
	pos = 0;
	while (1)
	{
		if (tmp->data == min)
			return (pos);
		tmp = tmp->next;
		pos++;
	}
}

void	sort_three(t_stack **a)
{
	int	x;
	int	y;
	int	z;
	int	size;

	size = list_size(a);
	if (size < 2)
		return ;
	if (size == 2 && (*a)->data > (*a)->next->data)
		return (sa(a), (void)0);
	x = (*a)->data;
	y = (*a)->next->data;
	z = (*a)->next->next->data;
	if (x > y && y < z && x < z)
		sa(a);
	else if (x > y && y > z)
		(sa(a), rra(a));
	else if (x > z && y < z)
		ra(a);
	else if (x < y && y > z && x < z)
		(sa(a), ra(a));
	else if (x < y && y > z && x > z)
		rra(a);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	min;
	int	pos;

	if (list_size(a) <= 3)
		return (sort_three(a), (void)0);
	while (list_size(a) > 3)
	{
		min = find_min_a(a);
		pos = get_min_pos(a, min);
		if (pos <= list_size(a) / 2)
			while (pos-- > 0)
				ra(a);
		else
			while (pos++ < list_size(a))
				rra(a);
		pb(a, b);
	}
	sort_three(a);
	pa(a, b);
	pa(a, b);
}
