/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doublette.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:59:19 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/13 17:36:11 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"


void doublette(T_stack **a,T_stack **b)
{
	int j = lenlist(a)/2 ;
	// T_stack *spirituela = lstnew((*a)->data);
	// T_stack *top = *a;
	// T_stack *trier = *a;
	int i = j;
	while (lenlist(a) != i )
	{
		pb(a,b);
		// visualiseur(a,b);
	}
	// while (lenlist(a))
	// 	lstadd(&spirituela,lstnew(top->data));
	// while(j>=0)
	// {
	// 	i = findMinA(a);
	// 	while (top->data != i)
	// 	{
	// 		rra(a);
	// 		visualiseur(a,b);
	// 		down(&top);
	// 	}
	// 	rb(a);
	// 	up(&top);
	// 	up(&trier);
	// 	visualiseur(a,b);
	// 	j--;
	// }
	//int j = 0;
	//while (j != lenlist(b))
	//{
	//}
}


