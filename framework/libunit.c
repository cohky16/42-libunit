/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:08:20 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/09 12:50:31 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

// 構造体の作成
static	t_unit_test	*new_unit_test(char *name, int(*function)(void))
{
	t_unit_test	*new;

	new = (t_unit_test *)malloc(sizeof(t_unit_test));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->function = function;
	return (new);
}

// テスト関数を読み込む
// e.g. load_test(&testlist, "Basic test", &basic_test);
void	load_test(t_unit_test **testlist, char *name, int (*function)(void))
{
	t_unit_test	*new;

	new = new_unit_test(name, function);
	new->next = *testlist;
	*testlist = new;
}

// プロセスidのチェック
static	int	check_pid(pid_t pid)
{
	if (WIFEXITED(pid))
	{
		if (pid == 0)
		{
			u_putendl("[OK]");
			return (1);
		}
		else if (pid == 256)
			u_putendl("[KO]");
	}
	if (WIFSIGNALED(pid))
	{
		if (WTERMSIG(pid) == SIGSEGV)
			u_putendl("[SEGV]");
		if (WTERMSIG(pid) == SIGBUS)
			u_putendl("[BUSE]");
	}
	return (0);
}

// 子プロセスの作成とテストの実行
static	int	exec_test(int (*function)(void))
{
	pid_t	pid;

	pid = fork();
	if (pid == 0)
	{
		if (function() == 0)
			exit(0);
		exit(1);
	}
	if (pid > 0)
		wait(&pid);
	return (check_pid(pid));
}

// テスト関数を実行する
// e.g. launch_tests(&testlist));
int	launch_tests(t_unit_test **testlist)
{
	t_unit_test	*test;
	int			count;

	test = *testlist;
	count = 0;
	while (test)
	{
		u_puts("       > ");
		u_puts(test->name);
		u_puts(" : ");
		count += exec_test(test->function);
		test = test->next;
	}
	return (count);
}
