/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:52:55 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/22 21:52:58 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_arg_num(const char *str)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (('0' <= str[i] && str[i] <= '9'))
			cnt++;
		i++;
	}
	if (cnt == 0)
		return (ERROR);
	return (0);
}

int	check_arg(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('0' <= str[i] && str[i] <= '9') \
		|| (9 <= str[i] && str[i] <= 13) || 32 == str[i])
			i++;
		else if (str[i] == '-' || str[i] == '+')
		{
			if ('0' > str[i + 1] || str[i + 1] > '9')
				return (ERROR);
			i++;
		}
		else
			return (ERROR);
	}
	return (0);
}

int	valid_arg(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc && argv[i] != NULL)
	{
		if (check_arg(argv[i]) != ERROR && check_arg_num(argv[i]) != ERROR)
			i++;
		else
			return (ERROR);
	}
	return (0);
}

void	check_intarr(t_info *info)
{
	int	i;
	int	j;

	i = 0;
	while (i < info->ret_cnt)
	{
		j = i + 1;
		while (j < info->ret_cnt)
		{
			if (info->ret_arr[i] == info->ret_arr[j])
				error_exit();
			j++;
		}
		i++;
	}
}
