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

typedef struct s_info
{
	char	*ret;
	int		*ret_arr;
	int		ret_cnt;
	int		pivot1;
	int		pivot2;
	int		a;
	int		b;
	int		c;
	int		p1;
	int		p2;
	int		s;
	int		m;
	int		l;
	int		cur;
	int		lst_cnt;
}	t_info;

typedef struct s_pivot
{
	int	s;
	int	m;
	int	l;
}	t_pivot;

void	error_exit(char *error_message);

t_node	*new_node(int data);
t_node	*peek_front(t_deque *pdeque);
t_node	*del_front(t_deque *pdeque);
t_node	*peek_rear(t_deque *pdeque);
t_node	*del_rear(t_deque *pdeque);
int		add_front(t_deque *pdeque, t_node *new);
int		add_rear(t_deque *pdeque, t_node *new);
void	free_deque(t_deque *pdeque);
void	print_deque(t_deque *pdeque);
void	arr_to_deque(t_info info, t_deque *deque_a);

void	sa(t_deque *deque_a);
void	sb(t_deque *deque_b);
void	ss(t_deque *deque_a, t_deque *deque_b);
void	pa(t_deque *deque_a, t_deque *deque_b);
void	pb(t_deque *deque_a, t_deque *deque_b);
void	ra(t_deque *deque_a);
void	rb(t_deque *deque_b);
void	rr(t_deque *deque_a, t_deque *deque_b);
void	rra(t_deque *deque_a);
void	rrb(t_deque *deque_b);
void	rrr(t_deque *deque_a, t_deque *deque_b);

void	swap(int *arr, int a, int b);
void	sort_arr(t_info info, int left, int right);
void	partition_1(t_info *info);
void	partition_2(t_info *info);
t_info	sort_partition(t_info *info);

t_info	find_pivot(int cur, int cnt, t_info *info);
void	sort_lst(t_info info, t_deque *deque_a, t_deque *deque_b, int lst_cnt);
void	a_to_b(t_info info, t_deque *deque_a, t_deque *deque_b);
void	part_atob(t_info *info, t_deque *deque_a, t_deque *deque_b, t_pivot *a);
void	b_to_a(t_info info, t_deque *deque_a, t_deque *deque_b);
void	part_btoa(t_info *info, t_deque *deque_a, t_deque *deque_b, t_pivot *b);
void	lst_num_five(t_info info, t_deque *deque_a, t_deque *deque_b, int cnt);

#endif
