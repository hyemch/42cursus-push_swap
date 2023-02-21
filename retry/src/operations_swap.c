/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:25:51 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 19:25:52 by hyecheon         ###   ########.fr       */
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
