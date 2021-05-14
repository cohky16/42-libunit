/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:12:23 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/14 18:49:12 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H
# include "../../framework/includes/libunit.h"
# include "../../libft/libft.h"
# include <string.h>
# define TESTS_COUNT 1

int		atoi_launcher(void);
int		atoi_basic_test(void);
int		atoi_null_test(void);

int		bzero_launcher(void);
int		bzero_basic_test(void);
int		bzero_null_test(void);

int		strlcpy_launcher(void);
int		strlcpy_basic_test(void);
int		strlcpy_null_test(void);

int		strlen_launcher(void);
int		strlen_basic_test(void);
int		strlen_null_test(void);

int		strnstr_launcher(void);
int		strnstr_basic1_test(void);
int		strnstr_basic2_test(void);
int		strnstr_not_found1_test(void);
int		strnstr_not_found2_test(void);
int		strnstr_same_strs_test(void);
int		strnstr_same_strs_with_smaller_len_test(void);
int		strnstr_partial_match_test(void);
int		strnstr_null_first_arg_test(void);
int		strnstr_null_first_arg_with_len_test(void);
int		strnstr_null_second_arg_with_len_test(void);
int		strnstr_null_second_arg_test(void);
int		strnstr_null_args_test(void);
int		strnstr_null_args_with_len_test(void);
int		strnstr_empty_second_arg_test(void);
int		strnstr_empty_first_arg_test(void);

int		test_launcher(void);
int     timeout_test(void);
size_t	test_timeout(const char *s);

#endif
