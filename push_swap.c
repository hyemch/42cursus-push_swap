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
 * 1. 입력값 받아 오기
 *  - '0' ~ '9' -> ft_atoi 해주기 & 이외의 값 에러
 * 	- white space
 * 	- +-하나씩만 있을땐 양수, 음수 & 여러개 들어왔을땐 에러
 * 	- 중복된 값 에러
 * 	- int 배열에 담아주기
 * */

static	int	check_arg(const char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (('0' <= str[i] && str[i] <= '9') \
		|| (9 <= str[i] && str[i] <= 13) || 32 == str[i])
		{
			j = i + 1;
			while (str[i] && str[j] != '\0')
			{
				if (str[i] == str [j])
					return (ERROR);
				j++;
			}
			i++;
		}
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

static int	valid_arg(char **argv)
{
	int		i;

	i = 1;
	while (argv[i] != NULL)
	{
		if (check_arg(argv[i]) != ERROR)
			i++;
		else
			return (ERROR);
	}
	return (0);
}

static int	parsing_arg(int argc, char **argv)
{
	char	*tmp;
	char	*ret;
	int		i;

	i = 1;
	ret = ft_calloc(1, sizeof(char));
	if (valid_arg(argv) == 0)
	{
		while (i < argc)
		{
			tmp = ret;
			ret = ft_strjoin(ret, argv[i]);
			free (tmp);
			tmp = ret;
			ret = ft_strjoin(tmp, " ");
			free (tmp);
			i++;
		}
	}
	printf("ret: %s\n", ret);
	return (0);
}

/*
* 1. tmp = "argv[1] argv[2] argv[3] argv[i].. " 담아주기
* 2. ' ' 기준으로 split -> int 베열에 담아주기
* 3. 연결리스트 deque
* 4. 가장 첫번째 인자가 스택의 맨 위에 있어야 한다.
* */

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	parsing_arg(argc, argv);
}
