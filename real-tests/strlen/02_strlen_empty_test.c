/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlen_empty_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:40:15 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 10:32:56 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strlen_empty_test(void)
{
	 const char	 *s = "";

	if (ft_strlen(s) == strlen(s))
		return (0);
	else
		return (-1);
}
