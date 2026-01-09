/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:57:06 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/09 10:42:27 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void	ra(T_stack **a)
{
	if (lenlist(a)>1)
	{
		down(a);
		ft_printf("ra\n");
	}
}

void	rb(T_stack **b)
{
	if (lenlist(b)>1)
	{
		down(b);
		ft_printf("rb\n");
	}
}
void	rr(T_stack **a, T_stack **b)
{
	if (lenlist(a)>1)
		down(a);
	if (lenlist(b)>1)
		down(b);
	ft_printf("rr\n");
}
void	down(T_stack **stack)
{
	*stack = (*stack)->prev;
}
