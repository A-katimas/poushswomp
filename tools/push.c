/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:08:33 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/23 15:12:05 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*node;

	if (*b == NULL)
	{
		node = lstnew((*a)->data);
		node->index = (*a)->index;
		*b = node;
		lstsup(a, *a);
	}
	else
	{
		node = lstnew((*a)->data);
		node->index = (*a)->index;
		lstadd(b, node);
		lstsup(a, *a);
	}
	down(b);
	ft_printf("pb\n");
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*node;

	if (*a == NULL)
	{
		node = lstnew((*b)->data);
		node->index = (*b)->index;
		*a = node;
		lstsup(b, *b);
	}
	else
	{
		node = lstnew((*b)->data);
		node->index = (*b)->index;
		lstadd(a, node);
		lstsup(b, *b);
	}
	down(a);
	ft_printf("pa\n");
}
