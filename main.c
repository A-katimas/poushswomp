/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:45 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/06 17:45:53 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int main(int ac , char **av)
{
	(void) ac;
	(void) av;
	int tableau [] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
	int *tab = ft_calloc(15,sizeof(int));

	T_stack a = {tableau,17};
	T_stack b = {tab,0};

	// ft_pushswap(&a,&b);
	// sa(&a);
	// //visualiseur(tableau, tab2);

	// test(&a,&b);
	bubul(&a,&b);
	// resoufeur(&a,&b);
	// 	visualiseur(&a, &b);
	// free(tab);
}


