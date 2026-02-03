/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:08:33 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/03 13:53:28 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*node;

	if (*b == NULL)
	{
		node = lstnew((*a)->data,(*a)->datastack);
		node->index = (*a)->index;
		*b = node;
		nodesup(a, *a);
	}
	else
	{
		node = lstnew((*a)->data,(*a)->datastack);
		node->index = (*a)->index;
		lstadd(b, node);
		nodesup(a, *a);
	}
	down(b);
    (*b)->datastack->pb++;
    (*b)->datastack->total++;
	ft_printf("pb\n");
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*node;

	if (*a == NULL)
	{
		node = lstnew((*b)->data,(*b)->datastack);
		node->index = (*b)->index;
		*a = node;
		nodesup(b, *b);
	}
	else
	{
		node = lstnew((*b)->data,(*b)->datastack);
		node->index = (*b)->index;
		lstadd(a, node);
		nodesup(b, *b);
	}
	down(a);
    (*a)->datastack->pa++;
    (*a)->datastack->total++;
	ft_printf("pa\n");
}
