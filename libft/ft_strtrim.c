/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:14:35 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/14 19:30:30 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_set_start(size_t start, size_t len,
							char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (!ft_strchr(set, s1[i]))
		{
			start = i;
			break ;
		}
		i++;
	}
	return (start);
}

static	int	ft_set_end(size_t end, size_t len,
							char const *s1, char const *set)
{
	while (len > 0)
	{
		if (!ft_strchr(set, s1[len]))
		{
			end = len + 1;
			break ;
		}
		len--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	start = ft_set_start(start, len, s1, set);
	end = 0;
	end = ft_set_end(end, len, s1, set);
	len = end - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, len + 1);
	return (str);
}
