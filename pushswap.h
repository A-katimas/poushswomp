/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:50 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/01 20:48:46 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft/libft.h"
# include "tools/toolsswap.h"

int		*resoufeur(int *tab, int taille);
int		resoula(int a);
int		resouchien(int a);
void	push(int *tab);
int		ft_pushswap(int *tab, int taille);


void	visualiseur(int *tab, int *tab2);

#endif