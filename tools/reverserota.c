/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserota.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:04:00 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/09 07:21:55 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void rra(T_stack **a)
{
	if (lenlist(a)>1)
	{
		up(a);
		ft_printf("rra\n");
	}
}

void rrb(T_stack **b)
{
	if (lenlist(b)>1)
	{
		up(b);
		ft_printf("rrb\n");
	}
}

void rrr(T_stack **a,T_stack **b)
{
	if (lenlist(a)>1)
		up(a);
	if (lenlist(b)>1)
		up(b);
	ft_printf("rrr\n");
}

void	up(T_stack **stack)
{
	*stack = (*stack)->next;
}
