/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:07:22 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/08 20:04:10 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
# include <sys/wait.h>
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct  s_unit_test
{
    char        *name;
    int         (*function)(void);
    struct      s_unit_test *next;
}               t_unit_test;


void            load_test(t_unit_test **testlist, char *name, int (*function)(void));
int             launch_tests(t_unit_test **testlist);

int             list_len(t_unit_test *testlist);
void            list_free(t_unit_test **testlist);
size_t          ft_strlen(const char *s);
void            u_putc(char c);
void	        u_puts(char const *s);
void	        u_putendl(char const *s);
void            u_putn(int n);

#endif