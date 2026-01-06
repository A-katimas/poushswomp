/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserota.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:04:00 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/06 17:25:18 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"
void rra(T_stack *a)
{
	if (a->taille>1)
	{
		up(a);
		ft_printf("rra\n");
	}
}

void rrb(T_stack *b)
{
	if (b->taille>1)
	{
		up(b);
		ft_printf("rrb\n");
	}
}

void rrr(T_stack *a,T_stack *b)
{
	if (a->taille>1)
		up(a);
	if (b->taille>1)
		up(b);
	ft_printf("rrr\n");
}

void	up(T_stack *stack)
{
	int i ;
	i = 0;
	while(i != stack->taille-1)
	{
		swap (&stack->data[i+1],&stack->data[i]);
		i++;
	}
}
