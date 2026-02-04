/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:58:29 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 19:52:51 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// utils2.c

#include "order.h"

int	find_max_a(t_stack **a)
{
	int		grand;
	t_stack	*index;

	grand = (*a)->data;
	index = (*a)->next;
	while (index != (*a))
	{
		if (grand < index->data)
			grand = index->data;
		index = index->next;
	}
	return (grand);
}

int	find_min_a(t_stack **a)
{
	int		grand;
	t_stack	*index;

	grand = (*a)->data;
	index = (*a)->next;
	while (index != (*a))
	{
		if (grand > index->data)
			grand = index->data;
		index = index->next;
	}
	return (grand);
}
