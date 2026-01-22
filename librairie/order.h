/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:45:06 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/22 19:12:14 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ORDER_H
# define ORDER_H

# include "toolsswap.h"
# include "pushswap.h"

typedef struct S_stack	t_stack;

void	bubul(t_stack **a, t_stack **b);
void	test(t_stack **a, t_stack **b);
void	chosetri(t_stack **a, t_stack **b);
void	chunk_sort(t_stack **a, t_stack **b);

int		findmaxa(t_stack **a);
int		findmina(t_stack **a);

#endif