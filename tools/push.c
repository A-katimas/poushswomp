/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:08:33 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/12 17:50:15 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void pb(T_stack **a, T_stack **b)
{
	if(*b==NULL)
	{
		*b = lstnew((*a)->data);
		lstsup(a,*a);
	}
	else
	{
		lstadd(b,lstnew((*a)->data));
		lstsup(a,*a);
	}
	down(b);
	ft_printf("pb\n");
}

void pa(T_stack **a, T_stack **b)
{
	if(*a==NULL)
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



