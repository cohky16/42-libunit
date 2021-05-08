/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlcpy_ko.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:34:39 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/08 19:22:20 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int     strlcpy_ko(void)
{
    char	dst[10];
	char	src[10];
    
    if (ft_strlcpy_ko(dst, src, sizeof(dst)) == strlcpy(dst, src, sizeof(dst)))
        return (0);
    return (-1);
}