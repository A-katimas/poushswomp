/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserota.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:04:00 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/05 14:24:06 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"
void rra(T_stack *a)
{
	up(a);
}

void rrb(T_stack *b)
{
	up(b);
}

void rrr(T_stack *a,T_stack *b)
{
	up(a);
	up(b);
}

void	up(T_stack *stack)
{
	int i ;
	i = 0;
	while(i != stack->taille)
	{
		swap (&stack->data[stack->taille-i],&stack->data[stack->taille-i+1]);
		i++;
	}
}