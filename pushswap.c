/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:58 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/01 21:21:16 by jtardieu         ###   ########.fr       */
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

int		ft_pushswap(int *tab , int taille)
{

	resoufeur(tab,taille);
	push(tab);
	return (*tab);
}

void	visualiseur(int *tab, int *tab2)
{
	int i = 0;
	ft_printf("tab1\t\t\t||\ttab2\n");
	system("clear");
	while (i!=15)
	{
		ft_printf("%d\t\t\t||\t%d\n",tab[i],tab2[i]);
		i++;
	}
	usleep(200000);
}
