/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:57:06 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/28 16:25:21 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void	rra(t_stack **a)
{
	if (lenlist(a) > 1)
	{
		down(a);
		ft_printf("rra\n");
        (*a)->datastack->rra++;
        (*a)->datastack->total++;
	}
}

void	rrb(t_stack **b)
{
	if (lenlist(b) > 1)
	{
		down(b);
		ft_printf("rrb\n");
        (*b)->datastack->rrb++;
        (*b)->datastack->total++;
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	if (lenlist(a) > 1)
		down(a);
	if (lenlist(b) > 1)
		down(b);
	ft_printf("rrr\n");
    (*a)->datastack->rrr++;
    (*a)->datastack->total++;
}

void	down(t_stack **stack)
{
	*stack = (*stack)->prev;
}
