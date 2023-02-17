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

/*
 * 1. 정렬된 int 배열 이용해서 pivot1, 2 찾아주기
 * 2. [num < pivot1] 일때 스택 b의 아래, [pivot1 < num < pivot2] 스택 b의 위로 넘겨주기
 * 3. stack a에 있는 [pivot2 < num] - pivot2개 찾고
 * 4. 1 - 5 개일경우 하드코딩

 * 1. pivot 찾기
 * 2. 5개 이하 일때 따로
 * 2. 값 비교 1 2 3 영역 정하기
 * */

t_info	find_pivot(int cur, int cnt, t_info *info)
{
	int	*arr;

	arr = info->ret_arr;
	info->p1 = arr[cur +(cnt / 3)];
	info->p2 = arr[cur +(cnt / 3) * 2];
	return (*info);
}

//void	sort_lst(t_info info, t_deque *deque_a, t_deque *deque_b, int lst_cnt)
//{
//	int	i;
//
//	i = 0;
//	info = find_pivot(info.cur, lst_cnt, &info);
//	printf ("pivot1 : %d\n", info.p1);
//	printf ("pivot2 : %d\n", info.p2);
//	while (i < lst_cnt)
//	{
//		printf("head data : %d\n", deque_a->head->data);
//		if (deque_a->head->data < info.p1)
//		{
//			info.cur = 0;
//			pb(deque_a, deque_b);
//			write(1, "pb\n", 3);
//			rb(deque_b);
//			write(1, "rb\n", 3);
//			info.s++;
//		}
//		else if (info.p2 <= deque_a->head->data)
//		{
//			info.cur = info.s + info.m;
//			ra(deque_a);
//			write(1, "ra\n", 3);
//			info.l++;
//		}
//		else
//		{
//			info.cur = info.s;
//			pb(deque_a, deque_b);
//			write(1, "pb\n", 3);
//			info.m++;
//		}
//		i++;
//		printf(" i : %d\n", i);
//	}
//}

void	a_to_b(t_info info, t_deque *deque_a, t_deque *deque_b)
{
	info = find_pivot(info.cur, info.lst_cnt, &info);
	printf ("pivot1 : %d\n", info.p1);
	printf ("pivot2 : %d\n", info.p2);
}
