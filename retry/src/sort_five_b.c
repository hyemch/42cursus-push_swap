/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:50:45 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 19:50:47 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_five_b(t_info info, t_deque *deque_a, t_deque *deque_b, int cnt)
{
	if (cnt == 1)
	{
		pa(deque_a, deque_b);
		write(1, "pa\n", 1);
	}
	else if (cnt == 2)
	{
		if (deque_b->head->data < deque_b->head->next->data)
		{
			sb(deque_b);
			write(1, "sb\n", 3);
		}
		pa(deque_a, deque_b);
		pa(deque_a, deque_b);
		write(1, "pa\npa\n", 6);
	}
	else if (cnt == 3)
	{
		lst_three_b(deque_a, deque_b, 3);
	}
	else if (cnt >= 4)
	{
		lst_rest_b(&info, deque_a, deque_b, cnt);
	}
}

void	lst_three_b(t_deque *deque_a, t_deque *deque_b, int cnt)
{
	t_node	*tmp;
	int		data[3];
	int		i;

	ft_memset(&data, 0, sizeof(data));
	tmp = deque_b->head;
	i = 0;
	while (i < cnt)
	{
		data[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	if (data[0] < data[1] && data[0] < data[2])
		bthree_headsmall(deque_a, deque_b, data);
	else if (data[1] < data[0] && data[1] < data[2])
		bthree_headmedium(deque_a, deque_b, data);
	else if (data[2] < data[0] && data[2] < data[1])
		bthree_headlarge(deque_a, deque_b, data);
}

void	bthree_headsmall(t_deque *deque_a, t_deque *deque_b, const int *data)
{
	if (data[1] < data[2])
	{
		rb(deque_b);
		sb(deque_b);
		write(1, "rb\nsb\n", 6);
	}
	else
	{
		rb(deque_b);
		write(1, "rb\n", 3);
	}
	pa(deque_a, deque_b);
	pa(deque_a, deque_b);
	rrb(deque_b);
	pa(deque_a, deque_b);
	write(1, "pa\npa\nrrb\npa\n", 13);
}

void	bthree_headmedium(t_deque *deque_a, t_deque *deque_b, const int *data)
{
	if (data[0] < data[2])
	{
		rb(deque_b);
		sb(deque_b);
		pa(deque_a, deque_b);
		rrb(deque_b);
		write(1, "rb\nsb\npa\nrrb\n", 13);
	}
	else
	{
		pa(deque_a, deque_b);
		sb(deque_b);
		write(1, "pa\nsb\n", 6);
	}
	pa(deque_a, deque_b);
	pa(deque_a, deque_b);
	write(1, "pa\npa\n", 6);
}

void	bthree_headlarge(t_deque *deque_a, t_deque *deque_b, const int *data)
{
	if (data[0] < data[1])
	{
		sb(deque_b);
		write(1, "sb\n", 3);
	}
	pa(deque_a, deque_b);
	pa(deque_a, deque_b);
	pa(deque_a, deque_b);
	write(1, "pa\npa\npa\n", 9);
}
