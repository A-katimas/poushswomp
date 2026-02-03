/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolsswap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 18:42:20 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/03 15:12:37 by jtardieu         ###   ########.fr       */
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

//swap
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	swap(int *a, int *b);

//push
void	pb(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);

//rotation
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	down(t_stack **stack);

//reverserota
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	up(t_stack **stack);

//lst_utilis
t_stack	*lstnew(int content,t_datastack *data);
void	lstadd(t_stack **lst, t_stack *new);
void	nodesup(t_stack **lst, t_stack *sup);
int		lenlist(t_stack **stack);
void	datainit(t_datastack *data);

//intisialisation_tool
int init2(char **enter,int i, t_stack **a,t_datastack *data);
int init(char **entrer, t_stack **a, t_stack **b,t_datastack *data);
int doublon(int find, t_stack **stack );


#endif
