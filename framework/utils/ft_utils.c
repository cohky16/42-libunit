/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:38:01 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/09 11:35:46 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	u_putc(char c)
{
	write(1, &c, 1);
}

void	u_puts(char const *s)
{
	write(1, s, ft_strlen(s));
}

void	u_putendl(char const *s)
{
	if (s)
	{
		u_puts(s);
		u_putc('\n');
	}
}

void	u_putn(int n)
{
	if (n == -2147483648)
	{
		u_puts("-2147483648");
		return ;
	}
	else if (n < 0)
	{
		n *= -1;
		u_putc('-');
	}
	if (n > 9)
		u_putn(n / 10);
	u_putc(n % 10 + 48);
}
