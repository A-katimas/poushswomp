/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:57:06 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/05 18:31:52 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void	ra(T_stack *a)
{
	down(a);
	ft_printf("ra\n");
}

void	rb(T_stack *b)
{
	down(b);
	ft_printf("ra\n");
}
void	rr(T_stack *a, T_stack *b)
{
	down(a);
	down(b);
	ft_printf("rr\n");
}
void	down(T_stack *stack)
{
	int i ;

	i = 0;
	while(i!=stack->taille+1)
	{
		swap (&stack->data[stack->taille-i],&stack->data[stack->taille-(i-1)]);
		i++;
	}
}
