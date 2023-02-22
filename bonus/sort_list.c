/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:45:10 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 19:45:13 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	check_sort_arr(t_info info)
{
	int	i;

	i = 0;
	while (i + 1 < info.ret_cnt)
	{
		if (info.ret_arr[i] > info.ret_arr[i + 1])
			return ;
		i++;
	}
	exit(0);
}

t_info	find_pivot(int cur, int cnt, t_info *info)
{
	int	*arr;

	arr = info->ret_arr;
	info->p1 = arr[cur +(cnt / 3)];
	info->p2 = arr[cur +(cnt / 3) * 2];
	return (*info);
}

void	check_ab(t_deque *deque_a, t_deque *deque_b, t_info *info, t_pivot *a)
{
	if (deque_b->head == NULL)
	{
		firstatob(info, deque_a, deque_b, a);
	}
	else if (deque_b->head != NULL)
	{
		part_atob(info, deque_a, deque_b, a);
		rrr_atob (deque_a, deque_b, a);
	}
}

void	sort_lessfive(t_info info, t_deque *deque_a, t_deque *deque_b, int cnt)
{
	if (cnt == 2)
	{
		if (deque_a->head->data > deque_a->head->next->data)
		{
			sa(deque_a);
			write(1, "sa\n", 3);
		}
	}
	else if (cnt == 3)
		sort_onlythree(&info, deque_a);
	else if (cnt == 4)
		sort_onlyfour(&info, deque_a, deque_b, cnt);
	else if (cnt == 5)
		sort_onlyfive(&info, deque_a, deque_b, cnt);
}
