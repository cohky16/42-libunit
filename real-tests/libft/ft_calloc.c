/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:30:39 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/14 19:29:47 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	ft_size;
	void	*mem;

	ft_size = count * size;
	mem = malloc(ft_size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, ft_size);
	return (mem);
}
