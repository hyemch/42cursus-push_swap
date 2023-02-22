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

#include "push_swap_bonus.h"

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
