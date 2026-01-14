/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:50 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/14 13:56:14 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft/libft.h"
# include "tools/toolsswap.h"
# include "orders/order.h"

// int		*resoufeur(t_stack *a, t_stack*b);
int		resoula(int a);
int		resouchien(int a);

void	visualiseur(t_stack **a, t_stack **b);
void	printStack(t_stack **stack);
float	compute_disorder(t_stack **stack);
int		adaptative(t_stack **a, t_stack **b, float disorder);
int		commande(char *what);
void	whatiwant(int want, float disorder, t_stack **a, t_stack **b);
#endif