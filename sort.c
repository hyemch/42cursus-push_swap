/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:39:26 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/14 14:39:39 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *arr, int a, int b)
{
	int	tmp;

	tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
}

//a = 1영역에 들어가는 "다음" 위치를 가리키는 변수 (left 보다 작은 값이 들어가는 자리)
//b = 현재 인덱스
//c = 3영역에 들어갈 "다음" 위치를 가리키는 변수 (right 보다 큰 값이 들어가는 자리)
/*
 * 1영역 = left ~ pivot1 -1
 * pivot1
 * 2영역 = pivot1 + 1 ~ pivot2 - 1
 * pivot2
 * 3영역 = pivot2 + 1 ~ right
 * */

void	sort_arr(t_info info, int left, int right)
{
	if (left <= right)
	{
		if (info.ret_arr[left] > info.ret_arr[right])
			swap(info.ret_arr, left, right);
		info.pivot1 = info.ret_arr[left];
		info.pivot2 = info.ret_arr[right];
		info.a = left + 1;
		info.b = left + 1;
		info.c = right - 1;
		info = get_sort(&info);
		swap(info.ret_arr, left, info.a);
		swap(info.ret_arr, right, info.c);
		sort_arr(info, left, info.a - 1);
		sort_arr(info, info.a + 1, info.c - 1);
		sort_arr(info, info.c + 1, right);
	}
}

t_info	get_sort(t_info *info)
{
	while ((*info).b <= (*info).c)
	{
		sort_partition(info);
	}
	(*info).a--;
	(*info).c++;
	return (*info);
}

void	sort_partition(t_info *info)
{
	if ((*info).ret_arr[(*info).b] < (*info).pivot1)
	{
		swap ((*info).ret_arr, (*info).b, (*info).a);
		(*info).a++;
	}
	else
	{
		if ((*info).ret_arr[(*info).b] > (*info).pivot2)
		{
			while ((*info).ret_arr[(*info).c] > (*info).pivot2 \
			&& (*info).b < (*info).c)
				(*info).c--;
			swap((*info).ret_arr, (*info).b, (*info).c);
			(*info).c--;
			if ((*info).ret_arr[(*info).b] < (*info).pivot1)
			{
				swap((*info).ret_arr, (*info).b, (*info).a);
				(*info).a++;
			}
		}
	}
	(*info).b++;
}
