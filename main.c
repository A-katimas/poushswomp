/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:45 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/07 18:06:35 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int main(int ac , char **av)
{
	(void) ac;
	(void) av;
	// int tableau = 0 ;
	// int tab = 0;

	T_stack *a = lstnew(1);

	printStack(&a);
	
	lstadd(&a,lstnew(2));

	printStack(&a);

	printStack(&a);
	
	lstadd(&a,lstnew(3));
	printStack(&a);
	
	
	lstadd(&a,lstnew(4));
	printStack(&a);


	
	lstadd(&a,lstnew(5));
	printStack(&a);


	while(a)
	{
		lstsup(&a,a);
		
	printStack(&a);ft_printf("la\n");

	}
	// ft_pushswap(&a,&b);
	// sa(&a);
	// //visualiseur(tableau, tab2);

	// test(&a,&b);
	// bubul(&a,&b);
	// resoufeur(&a,&b);

	// rra(&a);
	// // rra(&a);
	// 	visualiseur(&a, &b);
	// free(tab);
}


