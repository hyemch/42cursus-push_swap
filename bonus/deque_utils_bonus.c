/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_utils_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:53:14 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/22 21:53:17 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	add_front(t_deque *pdeque, t_node *new)
{
	if (pdeque->elementcnt == 0)
	{
		new->prev = NULL;
		new->next = NULL;
		pdeque->head = new;
		pdeque->tail = new;
	}
	else
	{
		new->prev = NULL;
		new->next = pdeque->head;
		pdeque->head->prev = new;
		pdeque->head = new;
	}
	pdeque->elementcnt++;
	return (TRUE);
}

int	add_rear(t_deque *pdeque, t_node *new)
{
	if (pdeque->elementcnt == 0)
	{
		new->prev = NULL;
		new->next = NULL;
		pdeque->head = new;
		pdeque->tail = new;
	}
	else
	{
		new->next = NULL;
		new->prev = pdeque->tail;
		pdeque->tail->next = new;
		pdeque->tail = new;
	}
	pdeque->elementcnt++;
	return (TRUE);
}

void	free_deque(t_deque *pdeque)
{
	t_node	*curr;
	t_node	*next;

	curr = pdeque->head;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}

void	arr_to_deque(t_info info, t_deque *deque_a)
{
	int		i;
	t_node	*new;

	i = 0;
	while (i < info.ret_cnt)
	{
		new = new_node(info.ret_arr[i]);
		if (new == NULL)
		{
			free_deque(deque_a);
			write(2, "ERROR\nnode allocate error\n", 26);
			error_exit();
		}
		add_rear(deque_a, new);
		i++;
	}
}
