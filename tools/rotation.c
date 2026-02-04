/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:57:06 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 20:32:06 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_utils.h"

void	rra(t_stack **a)
{
	if (list_size(a) > 1)
	{
		down(a);
		ft_printf("rra\n");
		(*a)->datastack->rra++;
		(*a)->datastack->total++;
	}
}

void	rrb(t_stack **b)
{
	if (list_size(b) > 1)
	{
		down(b);
		ft_printf("rrb\n");
		(*b)->datastack->rrb++;
		(*b)->datastack->total++;
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	if (list_size(a) > 1)
	{
		down(a);
		i++;
	}
	if (list_size(b) > 1)
	{
		down(b);
		i++;
	}
	if (i >= 1)
	{
		ft_printf("rrr\n");
		(*a)->datastack->rrr++;
		(*a)->datastack->total++;
	}
}

void	down(t_stack **stack) // ?
{
	*stack = (*stack)->prev;
}
