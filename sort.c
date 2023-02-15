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

//void	sort_arr(t_info	info, int left, int right)
//{
//	int	*arr;
//	int	a;
//	int	b;
//	int	c;
//
//	arr = info.ret_arr;
//	if (left <= right)
//	{
//		if (arr[left] > arr[right])
//			swap(arr, left, right);
//		info.pivot1 = arr[left];
//		info.pivot2 = arr[right];
//		a = left + 1; pivot1 보다 작은 값이 들어가는 자리.
//		b = left + 1; 현재 인덱스
//		c = right - 1; pivot2 보다 큰 값이 들어가는 자리.
//		while (b <= c) c는 pivot2보다 큰 값이 들어가는 자리로,
//						현재 인덱스인 b가 c와 엇갈렸을 경우 검사가 끝난 것.
//		{
//			if (arr[b] < info.pivot1) (pivot1 보다 작은 영역1 )
//			{
//				swap (arr, b, a); arr[b] arr[a]자리 바꾸고
//				a++; a 증가 -> pivot1보다 작은 다음값 지정하기 위한 준비.
//			}
//			else (pivot1 보다 큰 영역 2, 3)
//			{
//				if (arr[b] > info.pivot2) pivot2보다 큰 3영역
//				{
//					while (arr[c] > info.pivot2 && b < c)
//						c--; arr[c]는 3영역 자기자리에 잘 있으므로 감소시키면서 b와 스왑 할 자리 찾기.
//					swap(arr, b, c); arr[c] 가 pivot2보다 작을때 arr[b]와 스왑
//					c--; 새로운 pivot2보다 큰 수가 들어갈 자리 찾기위해.
//					if (arr[b] < info.pivot1)
//					{
//						swap(arr, b, a); 다시 b값을 판단해서 1영역에 넣을지 2영역에 넣을지 판단
//						a++;
//					}
//				}
//			}
//			b++; (현재 b 자리의 값 비교가 끝 -> ++해서 다음 값 검사)
//		}
//		a--; pivot1보다 작은 수가 들어갈 다음위치를 판단하기 위해 하나씩 줄여줌.
//		c++; pivot2보다 큰 수가 들어갈 다음위치를 판단하기 위해 하나씩 올려줌.
//		swap(arr, left, a);
//		swap(arr, right, c);
//		sort_arr(info, left, a - 1);
//		sort_arr(info, a + 1, c - 1);
//		sort_arr(info, c + 1, right);
//	}

void	swap(int *arr, int a, int b)
{
	int	tmp;

	tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
}

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
		info = sort_partition(&info);
		info.a--;
		info.c++;
		swap(info.ret_arr, left, info.a);
		swap(info.ret_arr, right, info.c);
		sort_arr(info, left, info.a - 1);
		sort_arr(info, info.a + 1, info.c - 1);
		sort_arr(info, info.c + 1, right);
	}
}

t_info	sort_partition(t_info *info)
{
	while (info->b <= info->c)
	{
		if (info->ret_arr[info->b] < info->pivot1)
			partition_1(info);
		else
		{
			if (info->ret_arr[info->b] > info->pivot2)
			{
				partition_2(info);
				if (info->ret_arr[info->b] < info->pivot1)
				{
					partition_1(info);
				}
			}
		}
		info->b++;
	}
	return (*info);
}

void	partition_1(t_info *info)
{
	swap (info->ret_arr, info->b, info->a);
	info->a++;
}

void	partition_2(t_info *info)
{
	while (info->ret_arr[info->c] > info->pivot2 && info->b < info->c)
		info->c--;
	swap(info->ret_arr, info->b, info->c);
	info->c--;
}
