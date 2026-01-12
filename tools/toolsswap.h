/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolsswap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 18:42:20 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/12 16:52:42 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLSSWAP_H
#define TOOLSSWAP_H

#include "../libft/libft.h"

typedef struct	S_stack{
	int data;
	int size;
	struct S_stack	*next;
	struct S_stack	*prev;
}T_stack;

void	swap(int *a, int *b);
void	up(T_stack **stack);
void	down(T_stack **stack);

void	sa(T_stack **a);
void	sb(T_stack **b);
void	ss(T_stack **a, T_stack **b);

void	pb(T_stack **a, T_stack **b);
void	pa(T_stack **a, T_stack **b);

void	ra(T_stack **a);
void	rb(T_stack **b);
void	rr(T_stack **a, T_stack **b);

void	rra(T_stack **a);
void	rrb(T_stack **b);
void	rrr(T_stack **a, T_stack **b);


T_stack	*lstnew(int content);
void	lstadd(T_stack **lst, T_stack *new);
void	lstsup(T_stack **lst, T_stack *sup);
int 	lenlist(T_stack **stack);


//sa (swap a): Swap the first 2 elements at the top of stack a.
//Do nothing if there is only one element or none.
//sb (swap b): Swap the first 2 elements at the top of stack b.
//Do nothing if there is only one element or none.
//ss : sa and sb at the same time.

//pa (push a): Take the first element at the top of b and put it at the top of a.
//Do nothing if b is empty.
//pb (push b): Take the first element at the top of a and put it at the top of b.
//Do nothing if a is empty.

//ra (rotate a): Shift up all elements of stack a by 1.
//The first element becomes the last one.
//rb (rotate b): Shift up all elements of stack b by 1.
//The first element becomes the last one.
//rr : ra and rb at the same time.

//rra (reverse rotate a): Shift down all elements of stack a by 1.
//The last element becomes the first one.
//rrb (reverse rotate b): Shift down all elements of stack b by 1.
//The last element becomes the first one.
//rrr : rra and rrb at the same time.

#endif
