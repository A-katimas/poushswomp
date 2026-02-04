/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chosetri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:26:32 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 19:50:03 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

void	chosetri(t_stack **a, t_stack **b)
{
	t_stack	*top;
	int		i;

	top = *a ;
	while (list_size(a) != 0)
	{
		i = find_min_a(a);
		while (top->data != i)
		{
			rra(a);
			down(&top);
		}
		pb(a, b);
	}
	while (list_size(b) != 0)
	{
		pa(a, b);
	}
}
