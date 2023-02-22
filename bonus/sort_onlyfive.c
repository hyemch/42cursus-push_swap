/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_onlyfive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:56:30 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 15:56:42 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	find_min(t_info *info, t_deque *deque_a, t_deque *deque_b, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (deque_a->head->data != (*info).ret_arr[0] \
		&& deque_a->head->data != (*info).ret_arr[1])
		{
			ra(deque_a);
			write(1, "ra\n", 3);
		}
		else if (deque_a->head->data == (*info).ret_arr[0] \
		|| deque_a->head->data == (*info).ret_arr[1])
		{
			pb(deque_a, deque_b);
			write(1, "pb\n", 3);
		}
		i++;
	}
}

static void	head_medium(t_info *info, t_deque *deque_a)
{
	if (deque_a->tail->data == (*info).ret_arr[4])
	{
		sa(deque_a);
		write(1, "sa\n", 3);
	}
	else if (deque_a->tail->data == (*info).ret_arr[2])
	{
		rra(deque_a);
		write(1, "rra\n", 4);
	}
}

static void	head_large(t_info *info, t_deque *deque_a)
{
	if (deque_a->tail->data == (*info).ret_arr[3])
	{
		ra(deque_a);
		write(1, "ra\n", 3);
	}
	else if (deque_a->tail->data == (*info).ret_arr[2])
	{
		sa(deque_a);
		rra(deque_a);
		write(1, "sa\nrra\n", 7);
	}
}

static void	head_small(t_info *info, t_deque *deque_a)
{
	if (deque_a->tail->data == (*info).ret_arr[3])
	{
		sa(deque_a);
		ra(deque_a);
		write(1, "sa\nra\n", 6);
	}
}

void	sort_onlyfive(t_info *info, t_deque *deque_a, t_deque *deque_b, int n)
{
	find_min(info, deque_a, deque_b, n);
	if (deque_a->head->data == (*info).ret_arr[2])
		head_small(info, deque_a);
	else if (deque_a->head->data == (*info).ret_arr[3])
		head_medium(info, deque_a);
	else if (deque_a->head->data == (*info).ret_arr[4])
		head_large(info, deque_a);
	if (deque_b->head->data < deque_b->head->next->data)
	{
		sb(deque_b);
		write(1, "sb\n", 3);
	}
	pa(deque_a, deque_b);
	pa(deque_a, deque_b);
	write(1, "pa\npa\n", 6);
}
