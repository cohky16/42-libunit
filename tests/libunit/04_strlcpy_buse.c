/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strlcpy_buse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:34:39 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/08 20:08:45 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int     strlcpy_buse(void)
{
    char	dst[10];
	char	src[10];
    
    if (ft_strlcpy_buse(dst, src, sizeof(dst)) == strlcpy(dst, src, sizeof(dst)))
        return (0);
    return (-1);
}