/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:08:33 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/07 15:48:41 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void pb(T_stack *a, T_stack *b)
{
	if(!b)
	{
		b = lstnew(a->data);
		lstsup(&a,a);
	}
	else
	{
		lstadd(&b,lstnew(a->data));
		lstsup(&a,a);
	}
	ft_printf("pb\n");
}

void pa(T_stack *a, T_stack *b)
{
	if(!a)
	{
		a = lstnew(b->data);
		lstsup(&b,b);
	}
	else
	{
		lstadd(&a,lstnew(b->data));
		lstsup(&b,b);
	}
	ft_printf("pa\n");
}



