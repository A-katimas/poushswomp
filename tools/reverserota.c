/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserota.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:04:00 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 20:31:42 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_utils.h"

void	ra(t_stack **a)
{
	if (list_size(a) > 1)
	{
		up(a);
		ft_printf("ra\n");
		(*a)->datastack->ra++;
		(*a)->datastack->total++;
	}
}

void	rb(t_stack **b)
{
	if (list_size(b) > 1)
	{
		up(b);
		ft_printf("rb\n");
		(*b)->datastack->rb++;
		(*b)->datastack->total++;
	}
}

void	rr(t_stack **a, t_stack **b)
{
	int	i ;

	i = 0;
	if (list_size(a) > 1)
	{
		up(a);
		i++;
	}
	if (list_size(b) > 1)
	{
		up(b);
		i++;
	}
	if (i >= 1)
	{
		ft_printf("rr\n");
		(*a)->datastack->rr++;
		(*a)->datastack->total++;
	}
}

void	up(t_stack **stack) // ?
{
	*stack = (*stack)->next;
}
