/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:08:33 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 20:39:25 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_utils.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*node;

	if (*b == NULL)
	{
		node = list_new((*a)->data, (*a)->datastack);
		node->index = (*a)->index;
		*b = node;
		del_node(a, *a);
	}
	else
	{
		node = list_new((*a)->data, (*a)->datastack);
		node->index = (*a)->index;
		list_add(b, node);
		del_node(a, *a);
	}
	down(b);
	(*b)->datastack->pb++;
	(*b)->datastack->total++;
	ft_printf("pb\n");
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*node;
	int		i;

	i = 0;
	if (*a == NULL)
	{
		node = list_new((*b)->data, (*b)->datastack);
		node->index = (*b)->index;
		*a = node;
		del_node(b, *b);
	}
	else
	{
		node = list_new((*b)->data, (*b)->datastack);
		node->index = (*b)->index;
		list_add(a, node);
		del_node(b, *b);
	}
	down(a);
	(*a)->datastack->pa++;
	(*a)->datastack->total++;
	ft_printf("pa\n");
}
