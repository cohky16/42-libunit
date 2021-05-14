/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlen_timeout_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:08:02 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/14 18:26:46 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int     timeout_test(void)
{
	const char	*s = "Hello";
    if (test_timeout(s) == strlen(s))
        return (0);
    return (-1);
}
