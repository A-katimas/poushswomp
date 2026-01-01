/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:55 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/01 21:23:35 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int		*resoufeur(int *tab, int taille)
{
	int i = 0;
	int j = 0;
	int tableau[taille];
	while (i != taille)
	{
		while (j != taille+1)
			{
			if (tab[i] >= tab[j])
			{
				swap(&tab[i], &tab[j]);
				visualiseur(tab ,tableau);
			}
			j++;
			}
		i++;
		j=i;
	}
	return (tab);
}
int resoula(int a)
{
	ft_printf("resolution 2%d",a);
	return 0;
}
int resouchien(int a)
{

	ft_printf("resolution 3 %d",a);
	return 0;
}