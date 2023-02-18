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

void	a_to_b(t_info info, t_deque *deque_a, t_deque *deque_b)
{
	t_pivot	a;
	int 	cur_temp;

	ft_memset(&a, 0, sizeof(a));
	if (info.lst_cnt <= 5)
		return (lst_five_a(info, deque_a, deque_b, info.lst_cnt));
	info = find_pivot(info.cur, info.lst_cnt, &info);
	//printf ("pivot1 : %d\n", info.p1);
	//printf ("pivot2 : %d\n", info.p2);
	cur_temp = info.cur;
	part_atob(&info, deque_a, deque_b, &a);
	rrr_atob (deque_a, deque_b, &a);
	info.lst_cnt = a.l;
	info.cur = cur_temp + a.s + a.m;
	a_to_b(info, deque_a, deque_b);
	info.lst_cnt = a.m;
	info.cur = cur_temp + a.s;
	b_to_a(info, deque_a, deque_b);
	info.lst_cnt = a.s;
	info.cur = cur_temp + 0;
	b_to_a(info, deque_a, deque_b);
}

void	part_atob(t_info *info, t_deque *deque_a, t_deque *deque_b, t_pivot *a)
{
	while (a->s + a->m + a->l < info->lst_cnt)
	{
		//printf("head data a : %d\n", deque_a->head->data);
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
		//printf("head data b : %d\n", deque_b->head->data);
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

void	sort_lessfive(t_info info, t_deque *deque_a, t_deque *deque_b, int cnt)
{
	int	i;

	if (cnt == 2)
	{
		if (deque_a->head->data > deque_a->head->next->data)
		{
			sa(deque_a);
			write(1, "sa\n", 3);
		}
	}
	else if (cnt == 3)
	{
		if (deque_a->head->data == info.ret_arr[0])
		{
			if (deque_a->tail->data == info.ret_arr[1])
			{
				rra(deque_a);
				sa(deque_a);
				write(1, "rra\nsa\n", 7);
			}
		}
		else if (deque_a->head->data == info.ret_arr[1])
		{
			if (deque_a->tail->data == info.ret_arr[2])
			{
				sa(deque_a);
				write(1, "sa\n", 3);
			}
			else
			{
				rra(deque_a);
				write(1, "rra\n", 4);
			}
		}
		else if (deque_a->head->data == info.ret_arr[2])
		{
			if (deque_a->tail->data == info.ret_arr[1])
			{
				ra(deque_a);
				write(1, "ra\n", 3);
			}
			else
			{
				sa(deque_a);
				rra(deque_a);
				write(1, "sa\nrra\n", 7);
			}
		}
	}
	else if (cnt == 4)
	{
		i = 0;
		while (i < cnt)
		{
			if (deque_a->head->data != info.ret_arr[0] \
			&& deque_a->head->data != info.ret_arr[1])
			{
				ra(deque_a);
				write(1, "ra\n", 3);
			}
			else if (deque_a->head->data == info.ret_arr[0] \
			|| deque_a->head->data == info.ret_arr[1])
			{
				pb(deque_a, deque_b);
				write(1, "pb\n", 3);
			}
			i++;
		}
		rra(deque_a);
		rra(deque_a);
		write(1, "rra\nrra\n", 8);
		if (deque_a->head->data > deque_a->head->next->data)
		{
			sa(deque_a);
			write(1, "sa\n", 3);
		}
		if (deque_b->head->data < deque_b->head->next->data)
		{
			sb(deque_b);
			write(1, "sb\n", 3);
		}
		pa(deque_a, deque_b);
		pa(deque_a, deque_b);
		write(1, "pa\npa\n", 6);
	}
	else if (cnt == 5)
	{
		i = 0;
		while (i < cnt)
		{
			if (deque_a->head->data != info.ret_arr[0] \
			&& deque_a->head->data != info.ret_arr[1])
			{
				ra(deque_a);
				write(1, "ra\n", 3);
			}
			else if (deque_a->head->data == info.ret_arr[0] \
			|| deque_a->head->data == info.ret_arr[1])
			{
				pb(deque_a, deque_b);
				write(1, "pb\n", 3);
			}
			i++;
		}
		if (deque_a->head->data == info.ret_arr[2])
		{
			if (deque_a->tail->data == info.ret_arr[3])
			{
				sa(deque_a);
				ra(deque_a);
				write(1, "sa\nra\n", 6);
			}
		}
		else if (deque_a->head->data == info.ret_arr[3])
		{
			if (deque_a->tail->data == info.ret_arr[4])
			{
				sa(deque_a);
				write(1, "sa\n", 3);
			}
			else if (deque_a->tail->data == info.ret_arr[2])
			{
				rra(deque_a);
				write(1, "rra\n", 4);
			}
		}
		else if (deque_a->head->data == info.ret_arr[4])
		{
			if (deque_a->tail->data == info.ret_arr[3])
			{
				ra(deque_a);
				write(1, "ra\n", 3);
			}
			else if (deque_a->tail->data == info.ret_arr[2])
			{
				sa(deque_a);
				rra(deque_a);
				write(1, "sa\nrra\n", 7);
			}
		}
		if (deque_b->head->data < deque_b->head->next->data)
		{
			sb(deque_b);
			write(1, "sb\n", 3);
		}
		pa(deque_a, deque_b);
		pa(deque_a, deque_b);
		write(1, "pa\npa\n", 6);
	}
}

void	lst_five_a(t_info info, t_deque *deque_a, t_deque *deque_b, int cnt)
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
	{
		lst_three_a(deque_a, cnt);
	}
	else if (cnt >= 4)
	{
		lst_rest_a(&info, deque_a, deque_b, cnt);
	}
}

void	lst_rest_a(t_info *info, t_deque *deque_a, t_deque *deque_b, int cnt)
{
	t_node	*tmp;
	int		i;
	int		min;
	int		min2;
	int		data[5];

	ft_memset(&data, 0, sizeof(data));
	tmp = deque_a->head;
	i = 0;
	while (i < cnt)
	{
		data[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	i = 2;
	min = 0;
	min2 = 1;
	while (i < cnt)
	{
		if (data[min] > data[i] || data[min2] > data[i])
		{
			if (data[min] < data[min2])
				min2 = i;
			else
				min = i;
		}
		i++;
	}
	i = 0;
	while (i < cnt)
	{
		if (deque_a->head->data != data[min] \
		&& deque_a->head->data != data[min2])
		{
			ra(deque_a);
			write(1, "ra\n", 3);
		}
		else
		{
			pb(deque_a, deque_b);
			write(1, "pb\n", 3);
		}
		i++;
	}
	i = 0;
	while (i < cnt - 2)
	{
		rra(deque_a);
		write(1, "rra\n", 4);
		i++;
	}
	lst_five_a((*info), deque_a, deque_b, cnt - 2);
	lst_five_b((*info), deque_a, deque_b, 2);
}

void	lst_three_a(t_deque *deque_a, int cnt)
{
	t_node	*tmp;
	int		data[3];
	int		i;

	ft_memset(&data, 0, sizeof(data));
	tmp = deque_a->head;
	i = 0;
	while (i < cnt)
	{
		data[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	if (data[0] < data[1] && data[0] < data[2])
	{
		if (data[2] < data[1])
		{
			ra(deque_a);
			sa(deque_a);
			rra(deque_a);
			write(1, "ra\nsa\nrra\n", 10);
		}
	}
	else if (data[1] < data[0] && data[1] < data[2])
	{
		if (data[0] < data[2])
		{
			sa(deque_a);
			write(1, "sa\n", 3);
		}
		else
		{
			sa(deque_a);
			ra(deque_a);
			sa(deque_a);
			rra(deque_a);
			write(1, "sa\nra\nsa\nrra\n", 13);
		}
	}
	else if (data[2] < data[0] && data[2] < data[1])
	{
		if (data[0] < data[1])
		{
			ra(deque_a);
			sa(deque_a);
			rra(deque_a);
			sa(deque_a);
			write(1, "ra\nsa\nrra\nsa\n", 13);
		}
		else
		{
			sa(deque_a);
			ra(deque_a);
			sa(deque_a);
			rra(deque_a);
			sa(deque_a);
			write(1, "sa\nra\nsa\nrra\nsa\n", 16);
		}
	}
}

void	lst_five_b(t_info info, t_deque *deque_a, t_deque *deque_b, int cnt)
{
	if (cnt == 1)
	{
		pa(deque_a, deque_b);
		write(1, "pa\n", 1);
	}
	else if (cnt == 2)
	{
		if (deque_b->head->data < deque_b->head->next->data)
		{
			sb(deque_b);
			write(1, "sb\n", 3);
		}
		pa(deque_a, deque_b);
		pa(deque_a, deque_b);
		write(1, "pa\npa\n", 6);
	}
	else if (cnt == 3)
	{
		lst_three_b(deque_a, deque_b, 3);
	}
	else if (cnt >= 4)
	{
		lst_rest_b(&info, deque_a, deque_b, cnt);
	}
}

void	lst_rest_b(t_info *info, t_deque *deque_a, t_deque *deque_b, int cnt)
{
	t_node	*tmp;
	int		i;
	int		min;
	int		min2;
	int		data[5];

	ft_memset(&data, 0, sizeof(data));
	tmp = deque_b->head;
	i = 0;
	while (i < cnt)
	{
		data[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	i = 2;
	min = 0;
	min2 = 1;
	while (i < cnt)
	{
		if (data[min] < data[i] || data[min2] < data[i])
		{
			if (data[min] > data[min2])
				min2 = i;
			else
				min = i;
		}
		i++;
	}
	i = 0;
	while (i < cnt)
	{
		if (deque_b->head->data != data[min] \
		&& deque_b->head->data != data[min2])
		{
			rb(deque_b);
			write(1, "rb\n", 3);
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
		}
		i++;
	}
	i = 0;
	while (i < cnt - 2)
	{
		rrb(deque_b);
		write(1, "rrb\n", 4);
		i++;
	}
	lst_five_b((*info), deque_a, deque_b, cnt - 2);
}

void	lst_three_b(t_deque *deque_a, t_deque *deque_b, int cnt)
{
	t_node	*tmp;
	int		data[3];
	int		i;

	ft_memset(&data, 0, sizeof(data));
	tmp = deque_b->head;
	i = 0;
	while (i < cnt)
	{
		data[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	if (data[0] < data[1] && data[0] < data[2])
	{
		if (data[1] < data[2])
		{
			rb(deque_b);
			sb(deque_b);
			write(1, "rb\nsb\n", 6);
		}
		else
		{
			rb(deque_b);
			write(1, "rb\n", 3);
		}
		pa(deque_a, deque_b);
		pa(deque_a, deque_b);
		rrb(deque_b);
		pa(deque_a, deque_b);
		write(1, "pa\npa\nrrb\npa\n", 13);
	}
	else if (data[1] < data[0] && data[1] < data[2])
	{
		if (data[0] < data[2])
		{
			rb(deque_b);
			sb(deque_b);
			pa(deque_a, deque_b);
			rrb(deque_b);
			write(1, "rb\nsb\npa\nrrb\n", 13);
		}
		else
		{
			pa(deque_a, deque_b);
			sb(deque_b);
			write(1, "pa\nsb\n", 6);
		}
		pa(deque_a, deque_b);
		pa(deque_a, deque_b);
		write(1, "pa\npa\n", 6);
	}
	else if (data[2] < data[0] && data[2] < data[1])
	{
		if (data[0] < data[1])
		{
			sb(deque_b);
			write(1, "sb\n", 3);
		}
		pa(deque_a, deque_b);
		pa(deque_a, deque_b);
		pa(deque_a, deque_b);
		write(1, "pa\npa\npa\n", 9);
	}
}

//small_index			info.cur = 0;
//middle_index			info.cur = info.s + info.m;
//big_index				info.cur = info.s;
//인자 3개 -> 명령어 3개 5개 -> 명령어 12개
// 5개일때 a_to_b b_to_a 만들기