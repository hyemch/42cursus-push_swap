/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:25:41 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 19:25:43 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_deque *deque_a, t_deque *deque_b)
{
	t_node	*new;

	if (deque_b->head == NULL)
		return ;
	new = del_front(deque_b);
	add_front(deque_a, new);
}

void	pb(t_deque *deque_a, t_deque *deque_b)
{
	t_node	*new;

	if (deque_a->head == NULL)
		return ;
	new = del_front(deque_a);
	add_front(deque_b, new);
}
