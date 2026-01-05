/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:58 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/05 17:07:39 by jtardieu         ###   ########.fr       */
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
	return (a->taille);
}

void	visualiseur(T_stack *a, T_stack *b)
{
	int i = 0;
	ft_printf("tab1\t\t\t||\ttab2\n");
	system("clear");
	while (i != 15)
	{
		ft_printf("%d\t\t\t||\t%d\n",a->data[i],b->data[i]);
		i++;
	}
	ft_printf("taille a %d\t\t||taille b\t%d\n",a->taille,b->taille);
	usleep(200000);
}
