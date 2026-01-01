/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 16:51:54 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/01 20:12:55 by jtardieu         ###   ########.fr       */
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
void	sa(int *tab)
{
	ft_printf("sa%d %d\n",tab[0],tab[1]);
}

void	sb(int *tab)
{
	ft_printf("sb%d %d\n",tab[0],tab[1]);
}


void	ss(int *tab, int *tab2)
{
	ft_printf("sa%d %d\n",tab[0],tab[1]);
	ft_printf("sb%d %d",tab2[0],tab2[1]);
}
