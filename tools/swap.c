/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 16:51:54 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/05 14:26:57 by jtardieu         ###   ########.fr       */
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
	swap (&a->data[0],&a->data[1]);
	ft_printf("sa");
}

void	sb(T_stack *b)
{
	swap (&b->data[0],&b->data[1]);
	ft_printf("sb");
}


void	ss(T_stack *a, T_stack *b)
{
	sa(a);
	sb(b);
	ft_printf("ss");
}
