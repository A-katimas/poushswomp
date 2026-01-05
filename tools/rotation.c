/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:57:06 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/05 14:31:48 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void	ra(T_stack *a)
{
	down(a);
}

void	rb(T_stack *b)
{
	down(b);
}
void	rr(T_stack *a, T_stack *b)
{
	down(a);
	down(b);
}
void	down(T_stack *stack)
{
	int i ;

	i = 0;
	while(i!=stack->taille)
	{
		swap (&stack->data[stack->taille-i],&stack->data[stack->taille-i+1]);
		i++;
	}
}
