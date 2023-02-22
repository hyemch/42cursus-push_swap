/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:26:03 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 19:26:04 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_deque *deque_a)
{
	t_node	*new;

	new = del_front(deque_a);
	add_rear(deque_a, new);
}

void	rb(t_deque *deque_b)
{
	t_node	*new;

	new = del_front(deque_b);
	add_rear(deque_b, new);
}

void	rr(t_deque *deque_a, t_deque *deque_b)
{
	ra(deque_a);
	rb(deque_b);
}
