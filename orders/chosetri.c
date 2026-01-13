/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chosetri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:26:32 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/13 18:28:50 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

void pushMaxA(T_stack **a,T_stack **b)
{
	T_stack *top = *a ;
	int i;
	while(lenlist(a)!=0)
	{
		i = findMinA(a);
		while (top->data != i)
		{
			rra(a);
			visualiseur(a,b);
			down(&top);
		}
		pb(a,b);
		visualiseur(a,b);
	}
	while(lenlist(b)!=0)
	{
		pa(a,b);
		visualiseur(a,b);
	}
}