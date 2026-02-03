/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intisialisation_tool.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:11:30 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/03 15:16:18 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

int init(char **entrer, t_stack **a, t_stack **b, t_datastack *data)
{
    int i;
    int error;

    i = 1;
    while (entrer[i][0] == '-' && entrer[i][1] == '-')
        i++;
    datainit(data);
	*a = lstnew(ft_atoi(entrer[i]),data);
	*b = NULL;
    error = init2(entrer,i, a,data);
    if (error == 0)
        return 0;
    return 1;
}

int init2(char **enter,int i, t_stack **a,t_datastack *data)
{
    int len ;
    while (enter[i])
	{
        if (ft_findisnum(enter[i]))
        {
            if (doublon(ft_atoi(enter[i]),a)==0)
                return 0;
            lstadd(a, lstnew(ft_atoi(enter[i]),data));
        }
        else
        {
            ft_printf("Error NaN\n");
            len = lenlist(a);
        	while (len--)
                nodesup(a, *a);
            return 0;
        }
        i++;
    }
    return(1);
}
int doublon(int find, t_stack **stack )
{
    t_stack *temp ;

    temp = *stack;

    while (temp->next!=*stack)
    {
        if (find == temp->data)
        {
            ft_printf("ERROR dobble");
            return 0;
        }
        temp=temp->next;
    }
    return (1);
}