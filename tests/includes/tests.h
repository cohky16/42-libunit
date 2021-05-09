/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:12:23 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/09 12:52:21 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H
# include "../../framework/includes/libunit.h"
# include "../../libft/libft.h"
# include <string.h>
# define TESTS_COUNT 1

int		strlcpy_launcher(void);
int		strlcpy_basic_test(void);
int		strlcpy_null_test(void);

#endif