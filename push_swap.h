/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:28:58 by hyecheon          #+#    #+#             */
/*   Updated: 2023/01/29 17:30:11 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define TRUE	1
# define ERROR -1

typedef struct s_node
{
	int				data;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_deque
{
	int		elementcnt;
	t_node	*head;
	t_node	*tail;
}	t_deque;

//typedef struct s_deque_node
//{
//	int		num;
//	t_deque	*head_a;
//	t_deque	*head_b;
//	t_deque	*tail_a;
//	t_deque	*tail_b;
//}	t_deque_node;

typedef struct s_info
{
	char	*ret;
	int		ret_cnt;
	int		*ret_arr;
}	t_info;

t_node	*new_node(int data);
t_deque	*new_deque(void);
int		push_front(t_deque *pdeque, t_node data);
int		push_rear(t_deque *pdeque, t_node data);
t_node	*peek_front(t_deque *pdeque);
t_node	*pop_frond(t_deque *pdeque);
t_node	*peek_rear(t_deque *pdeque);
t_node	*pop_rear(t_deque *pdeque);

#endif
