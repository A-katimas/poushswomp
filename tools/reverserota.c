/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserota.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:04:00 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 11:27:20 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void	ra(t_stack **a)
{
	if (lenlist(a) > 1)
	{
		up(a);
		ft_printf("ra\n");
		(*a)->datastack->ra++;
		(*a)->datastack->total++;
	}
}

void	rb(t_stack **b)
{
	if (lenlist(b) > 1)
	{
		up(b);
		ft_printf("rb\n");
		(*b)->datastack->rb++;
		(*b)->datastack->total++;
	}
}

void	rr(t_stack **a, t_stack **b)
{
	if (lenlist(a) > 1)
		up(a);
	if (lenlist(b) > 1)
		up(b);
	ft_printf("rr\n");
	(*a)->datastack->rr++;
	(*a)->datastack->total++;
}

void	up(t_stack **stack)
{
	*stack = (*stack)->next;
}
