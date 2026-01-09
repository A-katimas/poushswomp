/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:45 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/09 11:00:50 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int main(int ac , char **av)
{
	int i = 1;

	if (ac < 1 )
		return 0;
	T_stack *a = lstnew(ft_atoi(av[i]));
	T_stack *b;//= lstnew(ft_atoi(av[i]));

	 b = NULL;
	i++;
	// lstadd(&b,lstnew(ft_atoi(av[i])));
	while (i != ac)
	{
		lstadd(&a,lstnew(ft_atoi(av[i])));
		i++;
	}
	// visualiseur(&a,&b);
	// for(int j=0 ; j!=ac-1 ; j++)
	// {
	// 	pb(&a,&b);
	// 	visualiseur(&a,&b);
	// }
	// for(int j=0 ; j!=ac-2 ; j++)
	// {
	// 	pa(&a,&b);
	// 	visualiseur(&a,&b);
	// }
	
	// for(int j=0 ; j!=6 ; j++)
	// {
	// 	pb(&a,&b);
	// 	visualiseur(&a,&b);
	// }
// test(&a,&b);
	
	bubul(&a,&b);
	while(a)
	{
		lstsup(&a,a);
	}
	// ft_pushswap(&a,&b);
	// sa(&a);
	// //visualiseur(tableau, tab2);

	
	
	// resoufeur(&a,&b);

	// rra(&a);
	// // rra(&a);
	// 	visualiseur(&a, &b);
	// free(tab);
}


