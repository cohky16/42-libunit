/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlcpy_segv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:34:39 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/08 19:22:15 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int     strlcpy_segv(void)
{
    char	dst[1];
	char	src[2];
    
    if (ft_strlcpy_segv(dst, src, sizeof(dst)) == strlcpy(dst, src, sizeof(dst)))
        return (0);
    return (-1);
}