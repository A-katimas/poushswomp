/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:08:33 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/06 18:26:54 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void pb(T_stack *a, T_stack *b)
{
	b->size++;
	down(b);
	b->data[0] = a->data[0];
	a->data[0] = 0;
	up(a);
	a->size--;
	ft_printf("pa\n");
}

void pa(T_stack *a, T_stack *b)
{
	a->size++;
	down(a);
	a->data[0] = b->data[0];
	b->data[0] = 0;
	up(b);
	b->size--;
	ft_printf("pb\n");
}



