/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:54:46 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/22 21:54:48 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

long	ft_atol(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		if (result < 0)
			return (INT_ERROR);
		str++;
	}
	return (result * sign);
}

void	atol_intarr(t_info *info, char **arr)
{
	int		i;
	long	check_num;

	i = 0;
	while (arr[i])
	{
		check_num = ft_atol(arr[i]);
		if (check_num < -2147483648 || 2147483647 < check_num)
			error_exit();
		info->ret_arr[i] = (int)check_num;
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	split_arg(t_info *info)
{
	int		i;
	char	**arr;

	i = 0;
	arr = ft_split(info->ret, ' ');
	while (arr[i])
	{
		info->ret_cnt++;
		info->lst_cnt++;
		i++;
	}
	info->ret_arr = (int *)malloc(sizeof(int) * info->ret_cnt);
	if (!info->ret_arr)
		error_exit();
	atol_intarr(info, arr);
	check_intarr(info);
}

void	arg_join(t_info *info, int argc, char **argv, char *ret)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < argc)
	{
		tmp = ret;
		ret = ft_strjoin(ret, argv[i]);
		if (!ret)
			error_exit();
		free (tmp);
		tmp = ret;
		ret = ft_strjoin(ret, " ");
		if (!ret)
			error_exit();
		free (tmp);
		i++;
	}
	info->ret = ret;
}

int	parsing_arg(t_info *info, int argc, char **argv)
{
	char	*ret;

	ret = ft_calloc(1, sizeof(char));
	if (!ret)
		error_exit();
	if (valid_arg(argc, argv) != ERROR)
		arg_join(info, argc, argv, ret);
	else
		error_exit();
	split_arg(info);
	return (0);
}
