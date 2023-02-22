/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_b2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:52:00 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 19:52:03 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_rest_b(t_info *info, t_deque *deque_a, t_deque *deque_b, int cnt)
{
	t_node	*tmp;
	t_find	find;
	int		i;

	ft_memset(&find, 0, sizeof(find));
	tmp = deque_b->head;
	i = 0;
	while (i < cnt)
	{
		find.min_data[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	find_mindata_b(cnt, &find);
	min_sort_b(deque_a, deque_b, cnt, &find);
	lst_five_b((*info), deque_a, deque_b, cnt - 2);
}

void	find_mindata_b(int cnt, t_find *find)
{
	int	i;

	i = 2;
	find->min = 0;
	find->min2 = 1;
	while (i < cnt)
	{
		if (find->min_data[find->min] < find->min_data[i] \
		|| find->min_data[find->min2] < find->min_data[i])
		{
			if (find->min_data[find->min] > find->min_data[find->min2])
				find->min2 = i;
			else
				find->min = i;
		}
		i++;
	}
}

void	min_sort_b(t_deque *deque_a, t_deque *deque_b, int cnt, t_find *find)
{
	int	i;

	find->rb_cnt = 0;
	find->pa_cnt = 0;
	min_sort_ba(deque_a, deque_b, cnt, find);
	i = 0;
	while (i < find->rb_cnt)
	{
		rrb(deque_b);
		write(1, "rrb\n", 4);
		i++;
	}
}

void	min_sort_ba(t_deque *deque_a, t_deque *deque_b, int cnt, t_find *find)
{
	int	i;

	i = 0;
	while (i < cnt && find->pa_cnt != 2)
	{
		if (deque_b->head->data != find->min_data[find->min] \
		&& deque_b->head->data != find->min_data[find->min2])
		{
			rb(deque_b);
			write(1, "rb\n", 3);
			find->rb_cnt++;
		}
		else
		{
			pa(deque_a, deque_b);
			write(1, "pa\n", 3);
			if (deque_a->head->data > deque_a->head->next->data)
			{
				sa(deque_a);
				write(1, "sa\n", 3);
			}
			find->pa_cnt++;
		}
		i++;
	}
}
