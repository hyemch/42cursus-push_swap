/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:10:00 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 20:10:02 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(char *error_message)
{
	write(2, "Error\n", 6);
	write(2, error_message, ft_strlen(error_message));
	exit(1);
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
	i = 0;
	info->ret_arr = (int *)malloc(sizeof(int) * info->ret_cnt);
	if (!info->ret_arr)
		error_exit("malloc error\n");
	while (arr[i])
	{
		info->ret_arr[i] = ft_atoi(arr[i]);
		free(arr[i]);
		i++;
	}
	check_intarr(info);
}

static void	arg_join(t_info *info, int argc, char **argv, char *ret)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < argc)
	{
		tmp = ret;
		ret = ft_strjoin(ret, argv[i]);
		if (!ret)
			error_exit("parsing error\n");
		free (tmp);
		tmp = ret;
		ret = ft_strjoin(ret, " ");
		if (!ret)
			error_exit("parsing error\n");
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
		error_exit("parsing error\n");
	if (valid_arg(argc, argv) != ERROR)
		arg_join(info, argc, argv, ret);
	else
		error_exit("argument error!\n");
	split_arg(info);
	return (0);
}
