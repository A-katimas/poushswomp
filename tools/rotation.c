/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:57:06 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/07 15:50:42 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void	ra(T_stack *a)
{
	if (a->size>1)
	{
		down(a);
		ft_printf("ra\n");
	}
}

void	rb(T_stack *b)
{
	if (b->size>1)
	{
		down(b);
		ft_printf("ra\n");
	}
}
void	rr(T_stack *a, T_stack *b)
{
	if (a->size>1)
		down(a);
	if (b->size>1)
		down(b);
	ft_printf("rr\n");
}
void	down(T_stack *stack)
{
	int i ;

	i = 0;
	while(i!=stack->size)
	{
		if (i+1>stack->size)
			i++;
		// swap (&stack->data[(stack->size-1)-i],&stack->data[(stack->size-1)-(i+1)]);
		i++;
	}
}
