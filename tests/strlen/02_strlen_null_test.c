/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlcpy_segv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:34:39 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/09 13:16:06 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int     strlen_null_test(void)
{
    const char    *s = "Hello";

    if (ft_strlen(s) == strlen(s))
        return (0);
    return (-1);
}
