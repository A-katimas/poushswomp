/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserota.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:04:00 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/14 13:56:14 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void	ra(t_stack **a)
{
	if (lenlist(a) > 1)
	{
		up(a);
		ft_printf("ra\n");
	}
}

void	rb(t_stack **b)
{
	if (lenlist(b) > 1)
	{
		up(b);
		ft_printf("rb\n");
	}
}

void	rr(t_stack **a, t_stack **b)
{
	if (lenlist(a) > 1)
		up(a);
	if (lenlist(b) > 1)
		up(b);
	ft_printf("rr\n");
}

void	up(t_stack **stack)
{
	*stack = (*stack)->next;
}
