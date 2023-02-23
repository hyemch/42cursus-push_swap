/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:10:07 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 20:10:09 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (0);
	else
		return (1);
}

int	ft_isspace(int c)
{
	if ((9 <= c && c <= 13) || c == ' ')
		return (0);
	else
		return (1);
}

int	check_arg_valid(const char *str, int i)
{
	return (!(ft_isdigit(str[i + 1] == 0) || ft_isspace(str[i + 1]) == 0 \
	|| str[i + 1] == '-' || str[i + 1] == '+'));
}

int	check_arg(const char *str)
{
	int	i;

	i = 0;
	while (str[i + 1] != '\0')
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			if (!(ft_isdigit(str[i + 1] == 0) || ft_isspace(str[i + 1]) == 0))
				return (ERROR);
		}
		else if ((9 <= str[i] && str[i] <= 13) || 32 == str[i])
		{
			if (check_arg_valid(str, i))
				return (ERROR);
		}
		else if (str[i] == '-' || str[i] == '+')
		{
			if ('0' > str[i + 1] || str[i + 1] > '9')
				return (ERROR);
		}
		else
			return (ERROR);
		i++;
	}
	return (0);
}

//int	check_arg(const char *str)
//{
//	int	i;
//
//	i = 0;
//	while (str[i + 1] != '\0')
//	{
//		if ('0' <= str[i] && str[i] <= '9')
//		{
//			if (('0' <= str[i + 1] && str[i + 1] <= '9') \
//		|| (9 <= str[i + 1] && str[i + 1] <= 13) || 32 == str[i + 1])
//				i++;
//			else
//				return (ERROR);
//		}
//		else if ((9 <= str[i] && str[i] <= 13) || 32 == str[i])
//		{
//			if (('0' <= str[i + 1] && str[i + 1] <= '9') || \
//			(9 <= str[i + 1] && str[i + 1] <= 13) || 32 == str[i + 1] || \
//			str[i + 1] == '-' || str[i + 1] == '+')
//				i++;
//			else
//				return (ERROR);
//		}
//		else if (str[i] == '-' || str[i] == '+')
//		{
//			if ('0' > str[i + 1] || str[i + 1] > '9')
//				return (ERROR);
//			i++;
//		}
//		else
//			return (ERROR);
//	}
//	return (0);
//}

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
