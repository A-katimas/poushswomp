/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:58:29 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/12 19:58:30 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"


int findMaxA(T_stack **a)
{
	int grand = (*a)->data;
	T_stack	*index =(*a)->next;
	while (index != (*a))
	{
		if (grand < index->data)
			grand = index->data;
		index = index->next;

	}

	return grand;
}

int findMinA(T_stack **a)
{
	int grand = (*a)->data;
	T_stack	*index =(*a)->next;
	while (index != (*a))
	{
		if (grand > index->data)
			grand = index->data;
		index = index->next;

	}
	return grand;
}