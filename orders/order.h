/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:45:06 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/14 14:04:30 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ORDER_H
# define ORDER_H

# include "../tools/toolsswap.h"
# include "../pushswap.h"

	void bubul(t_stack **a, t_stack **b);
	void test(t_stack **a, t_stack **b);
	void doublette(t_stack **a,t_stack **b);
	void pushmaxa(t_stack **a,t_stack **b);

	int findMaxA(t_stack **a);
	int findMinA(t_stack **a);


#endif