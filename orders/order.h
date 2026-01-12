/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:45:06 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/12 16:55:39 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ORDER_H
# define ORDER_H

# include "../tools/toolsswap.h"
# include "../pushswap.h"

	void bubul(T_stack **a, T_stack **b);
	void test(T_stack **a, T_stack **b);
	void doublette(T_stack **a,T_stack **b);

	int findMaxA(T_stack **a);
	int findMinA(T_stack **a);


#endif