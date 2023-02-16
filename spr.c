/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:30:43 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/15 16:30:45 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_info	find_pivot(int cur, int cnt, t_info *info)
{
	int	*arr;

	arr = info->ret_arr;
	info->p1 = arr[cur +(cnt / 3)];
	info->p2 = arr[cur +(cnt / 3) * 2];
	return (*info);
}

/*
 * 1. 정렬된 int 배열 이용해서 pivot1, 2 찾아주기
 * 2. [num < pivot1] 일때 스택 b의 아래, [pivot1 < num < pivot2] 스택 b의 위로 넘겨주기
 * 3. stack a에 있는 [pivot2 < num] - pivot2개 찾고
 * 4. 1 - 5 개일경우 하드코딩
 * */
void	sort_lst(t_info info, t_deque *deque_a, t_deque *deque_b)
{
	int	i;

	i = 0;
	info = find_pivot(i, info.ret_cnt, &info);
	printf ("pivot1 : %d\n", info.p1);
	printf ("pivot2 : %d\n", info.p2);
}
