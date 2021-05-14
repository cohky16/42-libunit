/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 08:31:43 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/14 20:05:43 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(char const *s, char c)
{
	int		flag;
	int		i;
	int		count;

	count = 0;
	flag = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (flag == 0)
				count++;
			flag = 1;
		}
		else
			flag = 0;
		i++;
	}
	return (count);
}

static	int	ft_next_len(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static	int	ft_next_start(char *str, char c, int len)
{
	int		i;

	i = len;
	while (str[i])
	{
		if (str[i] != c)
			break ;
		i++;
	}
	return (i);
}

static	char	**ft_set_result(int count, char *str, char **result, char c)
{
	int		start;
	int		i;
	int		len;

	start = 0;
	i = 0;
	while (i < count)
	{
		len = ft_next_len(str + start, c);
		result[i] = ft_substr(str, start, len);
		if (result[i++])
		{
			while (--i >= 0)
				free(result[i]);
			free(result);
			free(str);
			return (NULL);
		}
		start = ft_next_start(str, c, start + len);
	}
	result[i] = NULL;
	free(str);
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	sep[2];
	char	*str;
	char	**result;

	ft_strlcpy(sep, &c, 2);
	if (!s || !(str = ft_strtrim(s, sep)))
		return (NULL);
	count = ft_count(str, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
	{
		free(str);
		return (NULL);
	}
	if (count <= 1)
	{
		if (count == 0)
			free(str);
		else if (count == 1)
			result[0] = str;
		result[count] = NULL;
		return (result);
	}
	return (ft_set_result(count, str, result, c));
}
