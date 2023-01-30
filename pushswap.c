/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:30:24 by hyecheon          #+#    #+#             */
/*   Updated: 2023/01/29 17:30:35 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
/*
 * 1. 입력값 받아 오기
 *  - '0' ~ '9' -> ft_atoi 해주기 & 이외의 값 에러
 * 	- white space 기준으로 나누기
 * 	- +-하나씩만 있을땐 양수, 음수 & 여러개 들어왔을땐 에러
 * 	- 중복값 에러
 * 	- int 배열에 담아주기
 * */
static void	pars_argument(int argc, char **argv)
{
	char	*tmp;
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		if (argv[i] != NULL)
		{
			while (argv[i][j] != '\0')
			{
				if (argv[i][j])
				{
				}
				j++;
			}
		}
		i++;
	}
}

int	main(int argc, char **argv)
{

	if (argc < 2)
		return (0);
	pars_argument(argc, argv);
}
