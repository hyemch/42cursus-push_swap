/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:27:17 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/08 17:27:20 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int data)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (0);
	node->data = data;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

t_node	*peek_front(t_deque *pdeque)
{
	if (pdeque->elementcnt == 0)
		return (NULL);
	return (pdeque->head);
}

t_node	*del_front(t_deque *pdeque)
{
	t_node	*ret;

	ret = peek_front(pdeque);
	if (ret == NULL)
		return (NULL);
	if (pdeque->elementcnt == 1)
	{
		pdeque->head = NULL;
		pdeque->tail = NULL;
	}
	else
	{
		pdeque->head = ret->next;
		pdeque->head->prev = NULL;
	}
	ret->next = NULL;
	pdeque->elementcnt--;
	return (ret);
}

t_node	*peek_rear(t_deque *pdeque)
{
	if (pdeque->elementcnt == 0)
		return (NULL);
	return (pdeque->tail);
}

t_node	*del_rear(t_deque *pdeque)
{
	t_node	*ret;

	ret = peek_rear(pdeque);
	if (ret == NULL)
		return (NULL);
	if (pdeque->elementcnt == 1)
	{
		pdeque->tail = NULL;
		pdeque->head = NULL;
	}
	else
	{
		pdeque->tail = ret->prev;
		pdeque->tail->next = NULL;
	}
	ret->prev = NULL;
	pdeque->elementcnt--;
	return (ret);
}
