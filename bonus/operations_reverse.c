/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:26:18 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 19:26:20 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra(t_deque *deque_a)
{
	t_node	*new;

	if (deque_a->head == NULL)
		return ;
	new = del_rear(deque_a);
	add_front(deque_a, new);
}

void	rrb(t_deque *deque_b)
{
	t_node	*new;

	if (deque_b->head == NULL)
		return ;
	new = del_rear(deque_b);
	add_front(deque_b, new);
}

void	rrr(t_deque *deque_a, t_deque *deque_b)
{
	if (deque_a->head == NULL || deque_b->head == NULL)
		return ;
	rra(deque_a);
	rrb(deque_b);
}
