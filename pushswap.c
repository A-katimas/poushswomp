/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:58 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/06 18:26:07 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	push(int *tab)
{
	int i = 0;
	while (i++ != 14)
	{
		ft_printf("%d,",tab[i]);
		i++;
	}
}

int		ft_pushswap(T_stack *a, T_stack *b)
{
	resoufeur(a,b);
	push(a->data);
	return (a->size);
}

void	visualiseur(T_stack *a, T_stack *b)
{
	int i = 0;
	system("clear");
	ft_printf("\ttab1\t\t\t||\ttab2\n");
	while (i != 18)
	{
		ft_printf("%i\t%d\t\t\t||\t%d\n",i,a->data[i],b->data[i]);
		i++;
	}
	ft_printf("size a %d\t\t\t||size b\t%d\n",a->size,b->size);
	usleep(100000);
}
