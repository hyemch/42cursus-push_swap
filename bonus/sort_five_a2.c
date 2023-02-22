/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_a2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:51:52 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 19:51:53 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	lst_rest_a(t_info *info, t_deque *deque_a, t_deque *deque_b, int cnt)
{
	t_node	*tmp;
	t_find	find;
	int		i;

	ft_memset(&find, 0, sizeof(find));
	tmp = deque_a->head;
	i = 0;
	while (i < cnt)
	{
		find.min_data[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	find_mindata_a(cnt, &find);
	min_sort_a(deque_a, deque_b, cnt, &find);
	lst_five_a((*info), deque_a, deque_b, cnt - 2);
	lst_five_b((*info), deque_a, deque_b, 2);
}

void	find_mindata_a(int cnt, t_find *find)
{
	int	i;

	i = 2;
	find->min = 0;
	find->min2 = 1;
	while (i < cnt)
	{
		if (find->min_data[find->min] > find->min_data[i] \
		|| find->min_data[find->min2] > find->min_data[i])
		{
			if (find->min_data[find->min] < find->min_data[find->min2])
				find->min2 = i;
			else
				find->min = i;
		}
		i++;
	}
}

void	min_sort_a(t_deque *deque_a, t_deque *deque_b, int cnt, t_find *find)
{
	int	i;
	int	pb_cnt;
	int	ra_cnt;

	i = 0;
	pb_cnt = 0;
	ra_cnt = 0;
	while (i < cnt && pb_cnt != 2)
	{
		if (deque_a->head->data != find->min_data[find->min] \
		&& deque_a->head->data != find->min_data[find->min2])
		{
			ra(deque_a);
			write(1, "ra\n", 3);
			ra_cnt++;
		}
		else
		{
			pb(deque_a, deque_b);
			write(1, "pb\n", 3);
			pb_cnt++;
		}
		i++;
	}
	min_sort_ra(deque_a, ra_cnt);
}

void	min_sort_ra(t_deque *deque_a, int ra_cnt)
{
	int	i;

	i = 0;
	while (i < ra_cnt)
	{
		rra(deque_a);
		write(1, "rra\n", 4);
		i++;
	}
	if (ra_cnt == 2)
	{
		if (deque_a->head->data > deque_a->head->next->data)
		{
			sa(deque_a);
			write(1, "sa\n", 3);
		}
	}
}
