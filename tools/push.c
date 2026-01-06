/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:08:33 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/06 15:21:28 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void pb(T_stack *a, T_stack *b)
{
	b->taille++;
	down(b);
	b->data[0] = a->data[0];
	a->data[0] = 0;
	up(a);
	a->taille--;
	ft_printf("pa\n");
}

void pa(T_stack *a, T_stack *b)
{
	a->taille++;
	down(a);
	a->data[0] = b->data[0];
	b->data[0] = 0;
	up(b);
	b->taille--;
	ft_printf("pb\n");
}



