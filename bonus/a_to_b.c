/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:46:55 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 19:46:57 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	a_to_b(t_info info, t_deque *deque_a, t_deque *deque_b)
{
	t_pivot	a;
	int		cur_tmp;

	ft_memset(&a, 0, sizeof(a));
	if (info.lst_cnt <= 5)
		return (lst_five_a(info, deque_a, deque_b, info.lst_cnt));
	info = find_pivot(info.cur, info.lst_cnt, &info);
	cur_tmp = info.cur;
	check_ab(deque_a, deque_b, &info, &a);
	info.lst_cnt = a.l;
	info.cur = cur_tmp + a.s + a.m;
	a_to_b(info, deque_a, deque_b);
	info.lst_cnt = a.m;
	info.cur = cur_tmp + a.s;
	b_to_a(info, deque_a, deque_b);
	info.lst_cnt = a.s;
	info.cur = cur_tmp + 0;
	b_to_a(info, deque_a, deque_b);
}

void	firstatob(t_info *info, t_deque *deque_a, t_deque *deque_b, t_pivot *a)
{
	while (a->s + a->m + a->l < info->lst_cnt)
	{
		if (deque_a->head->data < info->p1)
		{
			pb(deque_a, deque_b);
			rb(deque_b);
			write(1, "pb\nrb\n", 6);
			a->m++;
		}
		else if (info->p2 <= deque_a->head->data)
		{
			ra(deque_a);
			write(1, "ra\n", 3);
			a->l++;
		}
		else
		{
			pb(deque_a, deque_b);
			write(1, "pb\n", 3);
			a->s++;
		}
	}
}

void	part_atob(t_info *info, t_deque *deque_a, t_deque *deque_b, t_pivot *a)
{
	while (a->s + a->m + a->l < info->lst_cnt)
	{
		if (deque_a->head->data < info->p1)
		{
			pb(deque_a, deque_b);
			write(1, "pb\n", 3);
			a->s++;
		}
		else if (info->p2 <= deque_a->head->data)
		{
			ra(deque_a);
			write(1, "ra\n", 3);
			a->l++;
		}
		else
		{
			pb(deque_a, deque_b);
			rb(deque_b);
			write(1, "pb\nrb\n", 6);
			a->m++;
		}
	}
}

void	rrr_atob(t_deque *deque_a, t_deque *deque_b, t_pivot *a)
{
	int	i;

	i = 0;
	while (i < a->m || i < a->l)
	{
		if (i < a->m && i < a->l)
		{
			rrr(deque_a, deque_b);
			write(1, "rrr\n", 4);
		}
		else if (i < a->m)
		{
			rrb(deque_b);
			write(1, "rrb\n", 4);
		}
		else if (i < a->l)
		{
			rra(deque_a);
			write(1, "rra\n", 4);
		}
		i++;
	}
}
