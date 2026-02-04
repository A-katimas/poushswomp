/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:50 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 20:14:28 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft.h"
# include "swap_utils.h" // pas un bon nom d'header, swap_utils.h
# include "order.h"

typedef struct S_stack	t_stack; // s_stack

// void	visualiseur(t_stack **a, t_stack **b);
// void	printStack(t_stack **stack);

// utils
float	compute_disorder(t_stack **stack);
int		adaptative(t_stack **a, t_stack **b, float disorder);
int		get_flags(int actual_flags, char *current_flags);
void	what_i_do(int want, t_stack **a, t_stack **b);

//benchmarck
char	*get_strategy(int want, t_stack **a);
void	print_bench(t_stack **list, float disorder, char *strategy);

#endif