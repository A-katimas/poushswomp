/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:50 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/29 12:42:29 by aheno            ###   ########.fr       */
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

#endif