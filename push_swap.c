/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:30:24 by hyecheon          #+#    #+#             */
/*   Updated: 2023/01/29 17:30:35 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
* 1. tmp = "argv[1] argv[2] argv[3] argv[i].. " 담아주기
* 2. ' ' 기준으로 split -> atoi -> int 베열에 담아주기 -> 중복된 숫자 존재 할 경우 error
* 3. 연결리스트 deque
 *  - '0' ~ '9' -> ft_atoi 해주기 & 이외의 값 에러
 * 	- white space
 * 	- +-하나씩만 있을땐 양수, 음수 & 여러개 들어왔을땐 에러
 * 	- 중복된 값 에러
 * 	- int 배열에 담아주기
 * 	info->ret 에 넣어둔 char 배열 ' ' 기준으로 스플릿
 * 	받아온 숫자 개수 count -> int 배열 만들기
 * 	atoi 해서 넣어주기
 */

void	error_exit(char *error_message)
{
	write(2, "Error\n", 6);
	write(2, error_message, ft_strlen(error_message));
	exit(1);
}

static int	check_arg_num(const char *str)
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

static	int	check_arg(const char *str)
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

static int	valid_arg(int argc, char **argv)
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

static void	check_intarr(t_info *info)
{
	int	i;
	int	j;

	i = 0;
	while (i < info->ret_cnt && info->ret_arr[i])
	{
		j = i + 1;
		while (j < info->ret_cnt)
		{
			if (info->ret_arr[i] == info->ret_arr[j])
				error_exit("Overlap argument!\n");
			j++;
		}
		i++;
	}
}

static void	split_arg(t_info *info)
{
	int		i;
	char	**arr;

	i = 0;
	arr = ft_split(info->ret, ' ');
	while (arr[i])
	{
		info->ret_cnt++;
		i++;
	}
	i = 0;
	info->ret_arr = (int *)malloc(sizeof(int) * info->ret_cnt);
	while (arr[i])
	{
		info->ret_arr[i] = ft_atoi(arr[i]);
		i++;
	}
	check_intarr(info);
}

static int	parsing_arg(t_info *info, int argc, char **argv)
{
	char	*tmp;
	char	*ret;
	int		i;

	i = 1;
	ret = ft_calloc(1, sizeof(char));
	if (valid_arg(argc, argv) != ERROR)
	{
		while (i < argc)
		{
			tmp = ret;
			ret = ft_strjoin(ret, argv[i]);
			free (tmp);
			tmp = ret;
			ret = ft_strjoin(ret, " ");
			free (tmp);
			i++;
		}
		info->ret = ret;
	}
	else
		error_exit("argument error!\n");
	split_arg(info);
	return (0);
}

int	main(int argc, char **argv)
{
	t_info	info;
	t_deque	deque;

	if (argc < 2)
		error_exit("argument count error\n");
	ft_memset(&info, 0, sizeof(info));
	ft_memset(&deque, 0, sizeof(deque));
	parsing_arg(&info, argc, argv);
	arr_to_deque(info, &deque);
}
