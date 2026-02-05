/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:45:06 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/05 16:20:31 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ORDER_H
# define ORDER_H

# include "swap_utils.h"
# include "pushswap.h"

typedef struct S_stack	t_stack;

void	test(t_stack **a, t_stack **b);
void	chosetri(t_stack **a, t_stack **b);
void	chunk_sort(t_stack **a, t_stack **b);
void	radix_lsb(t_stack **a, t_stack **b);
void	sort_three(t_stack **a);
void	sort_five(t_stack **a, t_stack **b);
void	stack_to_array(t_stack *a, int *arr);
void	sort_array(int *arr, int size);
void	assign_index(t_stack *a, int *sorted, int size);

int		get_chunk_count(int size);
int		find_max_index_pos(t_stack **b);
int		find_max_a(t_stack **a);
int		find_min_a(t_stack **a);

#endif