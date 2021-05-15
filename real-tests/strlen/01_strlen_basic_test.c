/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlen_basic_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:42:26 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 10:32:22 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strlen_basic_test(void)
{
	 const char	 *s = "Hello";

	if (ft_strlen(s) == strlen(s))
		return (0);
	else
		return (-1);
}
