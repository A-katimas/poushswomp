/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:45 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/01 21:18:07 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int main(int ac , char **av)
{
	(void) ac;
	(void) av;
	int tableau [] = {8,4,6,2,0,10,5,17,1000000,300,40,36,29,114,3};
	//int tab2[15];
	sa(tableau);
	ft_pushswap(tableau,14);
	//visualiseur(tableau, tab2);
}


