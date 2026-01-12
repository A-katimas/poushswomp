/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:57:06 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/12 16:02:09 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void	rra(T_stack **a)
{
	if (lenlist(a)>1)
	{
		down(a);
		ft_printf("rra\n");
	}
}

void	rrb(T_stack **b)
{
	if (lenlist(b)>1)
	{
		down(b);
		ft_printf("rrb\n");
	}
}
void	rrr(T_stack **a, T_stack **b)
{
	if (lenlist(a)>1)
		down(a);
	if (lenlist(b)>1)
		down(b);
	ft_printf("rrr\n");
}
void	down(T_stack **stack)
{
	*stack = (*stack)->prev;
}
