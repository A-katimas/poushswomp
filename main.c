/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:45 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/05 18:32:19 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int main(int ac , char **av)
{
	(void) ac;
	(void) av;
	int tableau [] = {8,4,6,2,0,10,5,17,1000000,300,40,36,29,114,3};
	int *tab = ft_calloc(15,sizeof(int));
	//int tab2[15];

	T_stack a = {tableau,15};
	T_stack b = {tab,0};

	// ft_pushswap(&a,&b);
	// sa(&a);
	//visualiseur(tableau, tab2);

	bubul(&a,&b);
		visualiseur(&a, &b);
	free(tab);
}


