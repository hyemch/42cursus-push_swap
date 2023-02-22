/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_onlyfour.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:57:33 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 16:20:32 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	sort_min(t_info *info, t_deque *deque_a, t_deque *deque_b, int n)
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
	rra(deque_a);
	rra(deque_a);
	write(1, "rra\nrra\n", 8);
}

void	sort_onlyfour(t_info *info, t_deque *deque_a, t_deque *deque_b, int n)
{
	sort_min(info, deque_a, deque_b, n);
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
