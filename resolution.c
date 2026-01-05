/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:55 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/05 17:55:52 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int		*resoufeur(T_stack *a, T_stack *b)
{
	// int i = 0;
	int j = 0;

	// while (i != 1 )
	// {

		while (j != 6 )
		{
			pa(a,b);
			visualiseur(a ,b);
			j++;
		}
		j =0;
		while (j != 3)
		{
			pb(a,b);
			visualiseur(a ,b);
			j++;
		}
		// i++;
		// j=i;

	return (a->data);
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