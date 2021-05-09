/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 18:53:21 by kyasuda           #+#    #+#             */
/*   Updated: 2021/02/07 15:46:12 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_check_minus(int *n)
{
	int		minus;

	minus = 0;
	if (*n < 0)
	{
		*n *= -1;
		minus = 1;
	}
	return (minus);
}

static	int		ft_isdigits(int n, int flag)
{
	int		count;

	if (flag >= 1)
		count = 2;
	else
		count = 1;
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	char	*result;
	int		digits;
	int		flag;

	if (n == INT_MIN)
		return (ft_strdup(("-2147483648")));
	flag = ft_check_minus(&n);
	digits = ft_isdigits(n, flag);
	if (!(result = (char *)malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	result[digits--] = '\0';
	while (digits >= 0)
	{
		result[digits--] = n % 10 + 48;
		n /= 10;
	}
	if (flag)
		result[0] = '-';
	return (result);
}
