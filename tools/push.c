/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:08:33 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/14 13:56:14 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void	pb(t_stack **a, t_stack **b)
{
	if (*b == NULL)
	{
		*b = lstnew((*a)->data);
		lstsup(a,*a);
	}
	else
	{
		lstadd(b, lstnew((*a)->data));
		lstsup(a,*a);
	}
	down(b);
	ft_printf("pb\n");
}

void	pa(t_stack **a, t_stack **b)
{
	if (*a == NULL)
	{
		*a = lstnew((*b)->data);
		lstsup(b,*b);
	}
	else
	{
		lstadd(a,lstnew((*b)->data));
		lstsup(b,*b);
	}
	down(a);
	ft_printf("pa\n");
}
