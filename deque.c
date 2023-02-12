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

t_node	*peek_tail(t_deque *pdeque)
{
	if (pdeque->elementcnt == 0)
		return (NULL);
	return (pdeque->tail);
}

t_node	*del_tail(t_deque *pdeque)
{
	t_node	*ret;

	ret = peek_tail(pdeque);
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
	free(pdeque);
}

void	print_deque(t_deque *pdeque)
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
		printf("%d->", curr->data);
		curr = curr->next;
	}
	printf("%d\n", curr->data);
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
			error_exit("node allocate error\n");
		}
		add_rear(deque_a, new);
		i++;
	}
	print_deque(deque_a);
}

