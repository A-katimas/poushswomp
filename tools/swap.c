/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 16:51:54 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 11:27:41 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void	swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i ;
}

void	sa(t_stack **a)
{
	if (lenlist(a) > 1)
	{
		swap (&(*a)->data, &(*a)->next->data);
		ft_printf("sa\n");
		(*a)->datastack->sa++;
		(*a)->datastack->total++;
	}
}

void	sb(t_stack **b)
{
	if (lenlist(b) > 1)
	{
		swap (&(*b)->data, &(*b)->next->data);
		ft_printf("sb\n");
		(*b)->datastack->sb++;
		(*b)->datastack->total++;
	}
}

void	ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
	ft_printf("ss\n");
	(*a)->datastack->ss++;
	(*a)->datastack->total++;
}
