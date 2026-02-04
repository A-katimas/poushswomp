/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 16:51:54 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 20:32:30 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_utils.h"

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sa(t_stack **a)
{
	if (list_size(a) > 1)
	{
		swap (&(*a)->data, &(*a)->next->data);
		ft_printf("sa\n");
		(*a)->datastack->sa++;
		(*a)->datastack->total++;
	}
}

void	sb(t_stack **b)
{
	if (list_size(b) > 1)
	{
		swap (&(*b)->data, &(*b)->next->data);
		ft_printf("sb\n");
		(*b)->datastack->sb++;
		(*b)->datastack->total++;
	}
}

void	ss(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	if (list_size(a) > 1)
	{
		swap (&(*a)->data, &(*a)->next->data);
		i++;
	}
	if (list_size(b) > 1)
	{
		swap (&(*b)->data, &(*b)->next->data);
		i++;
	}
	if (i >= 1)
	{
		ft_printf("ss\n");
		(*a)->datastack->ss++;
		(*a)->datastack->total++;
	}
}
