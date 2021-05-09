/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:30:39 by kyasuda           #+#    #+#             */
/*   Updated: 2021/02/07 13:32:37 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	ft_size;
	void	*mem;

	ft_size = count * size;
	if (!(mem = malloc(ft_size)))
		return (NULL);
	ft_bzero(mem, ft_size);
	return (mem);
}
