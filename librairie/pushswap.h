/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:50 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/22 18:49:55 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft.h"
# include "toolsswap.h"
# include "order.h"

typedef struct S_stack	t_stack;

void	visualiseur(t_stack **a, t_stack **b);
void	printStack(t_stack **stack);
float	compute_disorder(t_stack **stack);
int		adaptative(t_stack **a, t_stack **b, float disorder);
int		commande(char *what);
void	whatiwant(int want, float disorder, t_stack **a, t_stack **b);
#endif