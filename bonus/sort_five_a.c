/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:50:36 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/20 19:50:37 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	lst_five_a(t_info info, t_deque *deque_a, t_deque *deque_b, int cnt)
{
	if (cnt == 2)
	{
		if (deque_a->head->data > deque_a->head->next->data)
		{
			sa(deque_a);
			write(1, "sa\n", 3);
		}
	}
	else if (cnt == 3)
		lst_three_a(deque_a, cnt);
	else if (cnt >= 4)
		lst_rest_a(&info, deque_a, deque_b, cnt);
}

void	lst_three_a(t_deque *deque_a, int cnt)
{
	t_node	*tmp;
	int		data[3];
	int		i;

	ft_memset(&data, 0, sizeof(data));
	tmp = deque_a->head;
	i = 0;
	while (i < cnt)
	{
		data[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	if (data[0] < data[1] && data[0] < data[2])
		lstthree_headsmall(deque_a, data);
	else if (data[1] < data[0] && data[1] < data[2])
		lstthree_headmedium(deque_a, data);
	else if (data[2] < data[0] && data[2] < data[1])
		lstthree_headlarge(deque_a, data);
}

void	lstthree_headsmall(t_deque *deque_a, const int *data)
{
	if (data[2] < data[1])
	{
		ra(deque_a);
		sa(deque_a);
		rra(deque_a);
		write(1, "ra\nsa\nrra\n", 10);
	}
}

void	lstthree_headmedium(t_deque *deque_a, const int *data)
{
	if (data[0] < data[2])
	{
		sa(deque_a);
		write(1, "sa\n", 3);
	}
	else
	{
		sa(deque_a);
		ra(deque_a);
		sa(deque_a);
		rra(deque_a);
		write(1, "sa\nra\nsa\nrra\n", 13);
	}
}

void	lstthree_headlarge(t_deque *deque_a, const int *data)
{
	if (data[0] < data[1])
	{
		ra(deque_a);
		sa(deque_a);
		rra(deque_a);
		sa(deque_a);
		write(1, "ra\nsa\nrra\nsa\n", 13);
	}
	else
	{
		sa(deque_a);
		ra(deque_a);
		sa(deque_a);
		rra(deque_a);
		sa(deque_a);
		write(1, "sa\nra\nsa\nrra\nsa\n", 16);
	}
}
