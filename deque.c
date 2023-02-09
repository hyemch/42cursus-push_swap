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

t_deque	*new_deque(void)
{
	t_deque	*deque;

	deque = (t_deque *)malloc(sizeof(t_deque));
	if (!deque)
		return (0);
	deque->elementcnt = 0;
	deque->head = NULL;
	deque->tail = NULL;
	return (deque);
}

int	addfront(t_deque *pdeque, t_node data)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (new == NULL)
		return (0);
	*new = data;
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

int	addrear(t_deque *pdeque, t_node data)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (new == NULL)
		return (0);
	*new = data;
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

t_node	*peekfront(t_deque *pdeque)
{
	if (pdeque->elementcnt == 0)
		return (NULL);
	return (pdeque->head);
}

t_node	*deletefrond(t_deque *pdeque)
{
	t_node	*ret;

	ret = peekfront(pdeque);
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

t_node	*peekrear(t_deque *pdeque)
{
	if (pdeque->elementcnt == 0)
		return (NULL);
	return (pdeque->tail);
}

t_node	*deleterear(t_deque *pdeque)
{
	t_node	*ret;

	ret = peekrear(pdeque);
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

static void	delete_deque(t_deque *pdeque)
{
	t_node	*curr;
	t_node	*right;

	curr = pdeque->head;
	while (curr)
	{
		right = curr->next;
		free(curr);
		curr = right;
	}
	free(pdeque);
}

static void	display_deque(t_deque *pdeque)
{
	t_node	*curr;

	curr = pdeque->head;
	if (curr == NULL)
	{
		printf("empty deque\n");
		return ;
	}
	while (curr->next)
	{
		printf("%d -> ", curr->data);
		curr = curr->next;
	}
	printf("%d\n", curr->data);
}
