/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_strnstr_null_second_arg_with_len_test.          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:55:41 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/14 19:55:42 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strnstr_null_second_arg_with_len_test(void)
{
	const char	*s1 = "Hello";
	const char	*s2 = NULL;
	const int	len = 5;

	if (ft_strnstr(s1, s2, len) == strnstr(s1, s2, len))
		return (0);
	return (-1);
}
