/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:47:03 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 19:47:05 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b_to_a(t_info info, t_deque *deque_a, t_deque *deque_b)
{
	t_pivot	b;
	int		cur_tmp;

	ft_memset(&b, 0, sizeof(b));
	if (info.lst_cnt <= 5)
		return (lst_five_b(info, deque_a, deque_b, info.lst_cnt));
	cur_tmp = info.cur;
	info = find_pivot(info.cur, info.lst_cnt, &info);
	part_btoa(&info, deque_a, deque_b, &b);
	info.lst_cnt = b.l;
	info.cur = cur_tmp + b.s + b.m;
	a_to_b(info, deque_a, deque_b);
	rrr_btoa(deque_a, deque_b, &b);
	info.lst_cnt = b.m;
	info.cur = cur_tmp + b.s;
	a_to_b(info, deque_a, deque_b);
	info.lst_cnt = b.s;
	info.cur = cur_tmp + 0;
	b_to_a(info, deque_a, deque_b);
}

void	part_btoa(t_info *info, t_deque *deque_a, t_deque *deque_b, t_pivot *b)
{
	while (b->s + b->m + b->l < info->lst_cnt)
	{
		if (deque_b->head->data < info->p1)
		{
			rb(deque_b);
			write(1, "rb\n", 3);
			b->s++;
		}
		else if (info->p2 <= deque_b->head->data)
		{
			pa(deque_a, deque_b);
			write(1, "pa\n", 3);
			b->l++;
		}
		else
		{
			pa(deque_a, deque_b);
			ra(deque_a);
			write(1, "pa\nra\n", 6);
			b->m++;
		}
	}
}

void	rrr_btoa(t_deque *deque_a, t_deque *deque_b, t_pivot *b)
{
	int	i;

	i = 0;
	while (i < b->m || i < b->s)
	{
		if (i < b->s && i < b->m)
		{
			rrr(deque_a, deque_b);
			write(1, "rrr\n", 4);
		}
		else if (i < b->m)
		{
			rra(deque_a);
			write(1, "rra\n", 4);
		}
		else if (i < b->s)
		{
			rrb(deque_b);
			write(1, "rrb\n", 4);
		}
		i++;
	}
}
