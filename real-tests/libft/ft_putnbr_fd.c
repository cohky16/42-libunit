/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 10:53:13 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/15 06:24:42 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_minus_check(int *n, int fd)
{
	if (*n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return (1);
	}
	else if (*n < 0)
	{
		*n *= -1;
		ft_putchar_fd('-', fd);
	}
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (is_minus_check(&n, fd))
		return ;
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + 48, fd);
}
