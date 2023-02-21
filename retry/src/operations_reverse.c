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

#include "push_swap.h"

void	rra(t_deque *deque_a)
{
	t_node	*new;

	new = del_rear(deque_a);
	add_front(deque_a, new);
}

void	rrb(t_deque *deque_b)
{
	t_node	*new;

	new = del_rear(deque_b);
	add_front(deque_b, new);
}

void	rrr(t_deque *deque_a, t_deque *deque_b)
{
	rra(deque_a);
	rrb(deque_b);
}
