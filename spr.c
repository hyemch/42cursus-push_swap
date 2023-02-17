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
t_info	find_pivot(int cur, int cnt, t_info *info)
{
	int	*arr;

	arr = info->ret_arr;
	info->p1 = arr[cur +(cnt / 3)];
	info->p2 = arr[cur +(cnt / 3) * 2];
	return (*info);
}


void	a_to_b(t_info info, t_deque *deque_a, t_deque *deque_b)
{
	t_pivot	a;

	ft_memset(&a, 0, sizeof(a));
	if (info.lst_cnt < 3)
		return ;
	info = find_pivot(info.cur, info.lst_cnt, &info);
	printf ("pivot1 : %d\n", info.p1);
	printf ("pivot2 : %d\n", info.p2);
	part_atob(&info, deque_a, deque_b, &a);
	info.lst_cnt = a.s;
	a_to_b(info, deque_a, deque_b);
	info.lst_cnt = a.m;
	info.cur = a.s;
	b_to_a(info, deque_a, deque_b);
	info.lst_cnt = a.l;
	info.cur = a.s + a.m;
	b_to_a(info, deque_a, deque_b);

}

void	part_atob(t_info *info, t_deque *deque_a, t_deque *deque_b, t_pivot *a)
{
	while (a->s + a->m + a->l <= info->lst_cnt)
	{
		printf("head data : %d\n", deque_a->head->data);
		if (deque_a->head->data < info->p1)
		{
			printf(" info.cur1 : %d\n", info->cur);
			pb(deque_a, deque_b);
			write(1, "pb\n", 3);
			rb(deque_b);
			write(1, "rb\n", 3);
			a->s++;
		}
		else if (info->p2 <= deque_a->head->data)
		{
			printf(" info.cur2 : %d\n", info->cur);
			ra(deque_a);
			write(1, "ra\n", 3);
			a->l++;
		}
		else
		{
			printf(" info.cur3 : %d\n", info->cur);
			pb(deque_a, deque_b);
			write(1, "pb\n", 3);
			a->m++;
		}
	}
}

void	b_to_a(t_info info, t_deque *deque_a, t_deque *deque_b)
{
	int		i;
	t_pivot	b;

	i = 0;
	ft_memset(&b, 0, sizeof(b));
	if (info.lst_cnt < 3)
		return ;
	info = find_pivot(info.cur, info.lst_cnt, &info);
	part_btoa(&info, deque_a, deque_b, &b);
	info.lst_cnt = b.l;
	info.cur = b.s + b.m;
	a_to_b(info, deque_a, deque_b);
	info.lst_cnt = b.m;
	info.cur = b.s;
	while (i < b.m)
		rra(deque_a);
	a_to_b(info, deque_a, deque_b);
	info.lst_cnt = b.s;
	info.cur = 0;
	while (i < b.s)
		rra(deque_a);
	b_to_a(info, deque_a, deque_b);
}

void	part_btoa(t_info *info, t_deque *deque_a, t_deque *deque_b, t_pivot *b)
{
	while (b->s + b->m + b->l <= info->lst_cnt)
	{
		if (deque_b->head->data < info->p1)
		{
			rb(deque_b);
			write(1, "rb\n", 3);
			b->s++;
		}
		else if (deque_b->head->data >= info->p2)
		{
			pa(deque_a, deque_b);
			write(1, "pa\n", 3);
			b->l++;
		}
		else
		{
			pa(deque_a, deque_b);
			write(1, "pa\n", 3);
			ra(deque_a);
			write(1, "ra\n", 3);
			b->m++;
		}
	}
}

//small_index			info.cur = 0;
//middle_index			info.cur = info.s + info.m;
//big_index				info.cur = info.s;

