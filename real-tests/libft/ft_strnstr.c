/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:17:03 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/15 10:25:29 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	if (!haystack || needle[0] == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && len >= needle_len)
	{
		if (haystack[i] == needle[0]
			&& !ft_memcmp(haystack + i, needle, needle_len))
			return ((char *)haystack + i);
		len--;
		i++;
	}
	return (NULL);
}
