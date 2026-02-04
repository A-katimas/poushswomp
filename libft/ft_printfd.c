/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:30:06 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 11:39:38 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static void	inhexa(unsigned int n, int i, int fd);
static void	cfekoi(char c, va_list varg, int fd);

int	ft_printfd(int fd, const char *str, ...)
{
	va_list	var;
	int		i;
	int		j;

	va_start (var, str);
	i = 0 ;
	j = 0 ;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			cfekoi(str[i], var, fd);
			j++;
		}
		else
			write(fd, &str[i], 1);
		i++;
	}
	va_end(var);
	return (i - j);
}

static void	inhexa(unsigned int n, int i, int fd)
{
	char	*base16;
	char	*base10;
	char	c;

	base10 = "0123456789";
	base16 = "0123456789abcdef";
	if (i == 2)
	{
		if (n >= 10)
			inhexa(n / 10, i, fd);
		c = base10[n % 10];
		write(fd, &c, 1);
		return ;
	}
	else
	{
		if (n >= 16)
			inhexa(n / 16, i, fd);
		c = base16[n % 16];
		if (i == 1)
			c = ft_toupper(c);
		write(fd, &c, 1);
		return ;
	}
}

static void	cfekoi(char c, va_list var, int fd)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(var, int), fd);
	else if (c == 's')
		ft_putstr_fd(va_arg(var, char *), fd);
	else if (c == 'x')
		inhexa(va_arg(var, unsigned int), 0, fd);
	else if (c == 'X')
		inhexa(va_arg(var, unsigned int), 1, fd);
	else if (c == 'u')
		inhexa(va_arg(var, unsigned int), 2, fd);
	else if (c == 'p')
	{
		write(1, "0x", 2);
		inhexa(va_arg(var, size_t), 0, fd);
	}
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(var, int), fd);
	else
		write(fd, &c, 1);
}
