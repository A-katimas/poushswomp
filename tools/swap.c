/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 16:51:54 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/06 17:08:25 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void swap(int *a, int *b)
{
	int i ;
	i = *a;
	*a = *b;
	*b = i ;
}
void	sa(T_stack *a)
{
	if (a->taille>1)
	{
		swap (&a->data[0],&a->data[1]);
		ft_printf("sa\n");
	}
}

void	sb(T_stack *b)
{
	if (b->taille>1)
	{
		swap (&b->data[0],&b->data[1]);
		ft_printf("sb\n");
	}
}


void	ss(T_stack *a, T_stack *b)
{
	sa(a);
	sb(b);
	ft_printf("ss\n");
}
