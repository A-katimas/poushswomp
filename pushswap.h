/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:50 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/13 18:32:21 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft/libft.h"
# include "tools/toolsswap.h"
# include "orders/order.h"

// int		*resoufeur(T_stack *a, T_stack*b);
int		resoula(int a);
int		resouchien(int a);

void	visualiseur(T_stack **a, T_stack **b);
void	printStack(T_stack **stack);
float	compute_disorder(T_stack **stack);
#endif