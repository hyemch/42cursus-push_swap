/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:33:02 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/04 20:33:26 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_deque *deque_a)
{
	int	tmp;

	if (deque_a->head == NULL)
		return ;
	tmp = deque_a->head->data;
	deque_a->head->data = deque_a->head->next->data;
	deque_a->head->next->data = tmp;
}

void	sb(t_deque *deque_b)
{
	int	tmp;

	if (deque_b->head == NULL)
		return ;
	tmp = deque_b->head->data;
	deque_b->head->data = deque_b->head->next->data;
	deque_b->head->next->data = tmp;
}

void	ss(t_deque *deque_a, t_deque *deque_b)
{
	sa(deque_a);
	sb(deque_b);
}

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
