/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubul.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:46:34 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/14 13:56:14 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

void bubul(t_stack **a, t_stack **b)
{
	int i ;
	int j;

	j = 1;
	i = 0;
	 visualiseur(a,b);
	while (lenlist(a) != 1)
	{
		while(i != lenlist(a))
		{
				if (!((*a)->data < (*a)->next->data))
				{
					sa(a);
					visualiseur(a,b);
					j=0;
				}
				else
				{
					rra(a);
					visualiseur(a,b);
					j++;
				}
				i++;
		}
		i = 0;
		if (j==0)
			rra(a);
		pb(a,b);
		visualiseur(a,b);
	}
	while (lenlist(b)!= 0)
	{
		rb(b);
		visualiseur(a,b);
		pa(a,b);
		visualiseur(a,b);
	}
	ra(a);
	visualiseur(a,b);
}

void test(t_stack **a, t_stack **b)
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