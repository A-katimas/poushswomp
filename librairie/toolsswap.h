/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolsswap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 18:42:20 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/28 16:32:38 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLSSWAP_H
# define TOOLSSWAP_H

# include "libft.h"
# include "pushswap.h"
# include "order.h"

typedef struct S_datastack
{
    int sa ;
    int sb ;
    int ss ;
    int pa ;
    int pb ;
    int ra ;
    int rb ;
    int rr ;
    int rra ;
    int rrb ;
    int rrr ;
    int total ;
} t_datastack;

typedef struct S_stack
{
	int				data;
	struct S_stack	*next;
	struct S_stack	*prev;
	int				index;
    t_datastack *datastack;
}	t_stack;

void	swap(int *a, int *b);
void	up(t_stack **stack);
void	down(t_stack **stack);

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

void	pb(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);

void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

t_stack	*lstnew(int content,t_datastack *data);
void	lstadd(t_stack **lst, t_stack *new);
void	lstsup(t_stack **lst, t_stack *sup);
int		lenlist(t_stack **stack);
void datainit(t_datastack *data);

#endif
