/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:50 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 11:49:43 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft.h"
# include "toolsswap.h"
# include "order.h"

typedef struct S_stack	t_stack;

// void	visualiseur(t_stack **a, t_stack **b);
// void	printStack(t_stack **stack);

// utils
float	compute_disorder(t_stack **stack);
int		adaptative(t_stack **a, t_stack **b, float disorder);
int		commande(char *what);
void	whatiwant(int want, t_stack **a, t_stack **b);

//benchmarck
char	*what_strategy(int want, t_stack **a);
void	print_bench(t_stack **list, float disorder, char *strategy);

#endif