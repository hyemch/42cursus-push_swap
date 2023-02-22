/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_onlythree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:20:15 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 16:20:18 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	three_head_medium(const t_info *info, t_deque *deque_a)
{
	if (deque_a->tail->data == (*info).ret_arr[2])
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

static void	three_head_large(t_info *info, t_deque *deque_a)
{
	if (deque_a->tail->data == (*info).ret_arr[1])
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

void	sort_onlythree(t_info *info, t_deque *deque_a)
{
	if (deque_a->head->data == (*info).ret_arr[0])
	{
		if (deque_a->tail->data == (*info).ret_arr[1])
		{
			rra(deque_a);
			sa(deque_a);
			write(1, "rra\nsa\n", 7);
		}
	}
	else if (deque_a->head->data == (*info).ret_arr[1])
		three_head_medium(info, deque_a);
	else if (deque_a->head->data == (*info).ret_arr[2])
		three_head_large(info, deque_a);
}
