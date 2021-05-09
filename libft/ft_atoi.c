/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:45:56 by kyasuda           #+#    #+#             */
/*   Updated: 2021/02/07 13:00:40 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_is_space(const char *str, int *symbol)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]))
			break ;
		else if (str[i] == '-' && ft_isdigit(str[i + 1]))
			*symbol = -1;
		else if (str[i] == '+' && ft_isdigit(str[i + 1]))
			*symbol = 1;
		else if (!(str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
					str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
			return (-1);
		i++;
	}
	return (i);
}

int				ft_atoi(const char *str)
{
	long	result;
	int		symbol;
	int		i;
	int		num;

	result = 0;
	symbol = 1;
	i = ft_is_space(str, &symbol);
	if (i < 0)
		return (0);
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			break ;
		num = str[i] - '0';
		if (result >= LONG_MAX / 10 && num >= LONG_MAX % 10)
		{
			if (symbol == 1)
				return (-1);
			return (0);
		}
		result = result * 10 + num;
		i++;
	}
	return (result * symbol);
}
