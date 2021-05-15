/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:36:36 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/15 06:22:16 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	int	count;

	u_putendl("*********************************");
	u_putendl("** 42 - Unit Tests ****");
	u_putendl("*********************************");
	count = TESTS_COUNT;
	count += atoi_launcher();
	count += bzero_launcher();
	count += strlcpy_launcher();
	count += strlen_launcher();
	count += strnstr_launcher();
	if (count == TESTS_COUNT)
		return (0);
	else
		return (-1);
}
