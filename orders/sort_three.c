/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:10:00 by aheno             #+#    #+#             */
/*   Updated: 2026/02/04 19:12:22 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

void	sort_three(t_stack **a)
{
	int	x;
	int	y;
	int	z;
	int	size;

	size = list_size(a);
	if (size < 2)
		return ;
	if (size == 2 && (*a)->data > (*a)->next->data)
		return (sa(a), (void)0);
	x = (*a)->data;
	y = (*a)->next->data;
	z = (*a)->next->next->data;
	if (x > y && y < z && x < z)
		sa(a);
	else if (x > y && y > z)
		(sa(a), rra(a));
	else if (x > z && y < z)
		ra(a);
	else if (x < y && y > z && x < z)
		(sa(a), ra(a));
	else if (x < y && y > z && x > z)
		rra(a);
}
