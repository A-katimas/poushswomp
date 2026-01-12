/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubul.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:46:34 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/12 17:39:16 by jtardieu         ###   ########.fr       */
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
		ft_printf("%d\n",i);
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




void bubul(T_stack **a, T_stack **b)
{
	pushMaxA(a,b);
	// int i ;
	// int j;

	// j = 1;
	// i = 0;
	////  visualiseur(a,b);
	// while (lenlist(a) != 1)
	// {
	// 	while(i != lenlist(a))
	// 	{
	// 			if (!((*a)->data < (*a)->next->data))
	// 			{
	// 				sa(a);
	// 				// visualiseur(a,b);
	// 				j=0;
	// 			}
	// 			else
	// 			{
	// 				rra(a);
	// 				// visualiseur(a,b);
	// 				j++;
	// 			}
	// 			i++;
	// 	}
	// 	i = 0;
	// 	if (j==0)
	// 		rra(a);
	// 	pb(a,b);
	// 	// visualiseur(a,b);
	// }
	// while (lenlist(b)!= 0)
	// {
	// 	rb(b);
	// 	// visualiseur(a,b);
	// 	pa(a,b);
	// 	// visualiseur(a,b);
	// }
	// ra(a);
	// 	// visualiseur(a,b);
}

void test(T_stack **a, T_stack **b)
{
	int i = 0;
	int j = 5;

	while (i!= j)
	{
		pb(a,b);
		i++;
		visualiseur(a,b);
	}
	i=0;

	while (i!= j)
	{
		sa(a);
		i++;
		visualiseur(a,b);
	}
i=0;
	while (i!= j)
	{
		sb(b);
		i++;
	visualiseur(a,b);
	}
i=0;
	while (i!= j)
	{
		ss(a,b);
		i++;
		visualiseur(a,b);
	}
	i=0;

	while (i!= j)
	{
		rrr(a,b);
		i++;
		visualiseur(a,b);
	}
i=0;
	while (i!= j)
	{
		rr(a,b);
		i++;
		visualiseur(a,b);
	}
i=0;
	while (i!= j)
	{
		rra(a);
		i++;
		visualiseur(a,b);
	}
i=0;
	while (i!= j)
	{
		rrb(b);
		i++;
		visualiseur(a,b);
	}
i=0;
	while (i!= j+16)
	{
		ra(a);
		i++;
		visualiseur(a,b);
	}
i=0;
	while (i!= j)
	{
		rb(b);
		i++;
		visualiseur(a,b);
	}
i=0;
	while (i!= j)
	{
		pa(a,b);
		i++;
		visualiseur(a,b);
	}
i=0;
}