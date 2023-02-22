/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:00:25 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/22 20:00:27 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/libft.h"
# include "get_next_line_bonus.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# define TRUE	1
# define ERROR -1
# define INT_ERROR -9999999999

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
	int		cur;
	int		lst_cnt;
}	t_info;

typedef struct s_find
{
	int	min;
	int	min2;
	int	min_data[5];
	int	rb_cnt;
	int	pa_cnt;
}	t_find;

typedef struct s_pivot
{
	int	s;
	int	m;
	int	l;
}	t_pivot;

typedef struct s_cmd_info
{
	void	(*func[5])(t_deque *deque_a, t_deque *deque_b);
	void	(*func_a[3])(t_deque *a);
	void	(*func_b[3])(t_deque *b);
}	t_cmd_info;

/*utils_bonus.c*/
int		ft_strcmp(const char *s1, const char *s2);
void	error_exit(void);
void	print_error(void);

/*parsing.c*/
long	ft_atol(const char *str);
void	atol_intarr(t_info *info, char **arr);
void	arg_join(t_info *info, int argc, char **argv, char *ret);
void	split_arg(t_info *info);
int		parsing_arg(t_info *info, int argc, char **argv);

/*check_arg.c*/
void	check_intarr(t_info *info);
int		valid_arg(int argc, char **argv);
int		check_arg(const char *str);
int		check_arg_num(const char *str);

/*deque.c*/
t_node	*new_node(int data);
t_node	*peek_front(t_deque *pdeque);
t_node	*del_front(t_deque *pdeque);
t_node	*peek_rear(t_deque *pdeque);
t_node	*del_rear(t_deque *pdeque);

/*deque_utils*/
int		add_front(t_deque *pdeque, t_node *new);
int		add_rear(t_deque *pdeque, t_node *new);
void	free_deque(t_deque *pdeque);
void	arr_to_deque(t_info info, t_deque *deque_a);

/* operations_push.c*/
void	pa(t_deque *deque_a, t_deque *deque_b);
void	pb(t_deque *deque_a, t_deque *deque_b);
/* operations_swap.c*/
void	sa(t_deque *deque_a);
void	sb(t_deque *deque_b);
void	ss(t_deque *deque_a, t_deque *deque_b);
/* operations_rotate.c*/
void	ra(t_deque *deque_a);
void	rb(t_deque *deque_b);
void	rr(t_deque *deque_a, t_deque *deque_b);
/* operations_reverse.c*/
void	rra(t_deque *deque_a);
void	rrb(t_deque *deque_b);
void	rrr(t_deque *deque_a, t_deque *deque_b);

#endif
