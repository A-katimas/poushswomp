/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:57:06 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/14 13:56:14 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void	rra(t_stack **a)
{
	if (lenlist(a) > 1)
	{
		down(a);
		ft_printf("rra\n");
	}
}

void	rrb(t_stack **b)
{
	if (lenlist(b) > 1)
	{
		down(b);
		ft_printf("rrb\n");
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	if (lenlist(a) > 1)
		down(a);
	if (lenlist(b) > 1)
		down(b);
	ft_printf("rrr\n");
}

void	down(t_stack **stack)
{
	*stack = (*stack)->prev;
}
