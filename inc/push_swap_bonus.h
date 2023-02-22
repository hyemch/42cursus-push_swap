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

/*main.c*/
void	error_exit(void);

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

/* sort_intarr.c*/
void	swap(int *arr, int a, int b);
void	sort_arr(t_info info, int left, int right);
void	partition_1(t_info *info);
void	partition_2(t_info *info);
t_info	sort_partition(t_info *info);

/*sort_list.c*/
void	check_sort_arr(t_info info);
t_info	find_pivot(int cur, int cnt, t_info *info);
void	check_ab(t_deque *deque_a, t_deque *deque_b, t_info *info, t_pivot *a);
void	sort_lessfive(t_info info, t_deque *deque_a, t_deque *deque_b, int cnt);

/*a_to_b.c*/
void	firstatob(t_info *info, t_deque *deque_a, t_deque *deque_b, t_pivot *a);
void	a_to_b(t_info info, t_deque *deque_a, t_deque *deque_b);
void	part_atob(t_info *info, t_deque *deque_a, t_deque *deque_b, t_pivot *a);
void	rrr_atob(t_deque *deque_a, t_deque *deque_b, t_pivot *a);

/*b_to_a.c*/
void	b_to_a(t_info info, t_deque *deque_a, t_deque *deque_b);
void	part_btoa(t_info *info, t_deque *deque_a, t_deque *deque_b, t_pivot *b);
void	rrr_btoa(t_deque *deque_a, t_deque *deque_b, t_pivot *b);

/* sort_onlythree.c*/
void	sort_onlythree(t_info *info, t_deque *deque_a);
/* sort_onlyfour.c*/
void	sort_onlyfour(t_info *info, t_deque *deque_a, t_deque *deque_b, int n);
/* sort_onlyfive.c*/
void	sort_onlyfive(t_info *info, t_deque *deque_a, t_deque *deque_b, int n);

/*sort_five_a.c*/
void	lst_five_a(t_info info, t_deque *deque_a, t_deque *deque_b, int cnt);
void	lst_three_a(t_deque *deque_a, int cnt);
void	lstthree_headsmall(t_deque *deque_a, const int *data);
void	lstthree_headmedium(t_deque *deque_a, const int *data);
void	lstthree_headlarge(t_deque *deque_a, const int *data);
/*sort_five_a2.c*/
void	lst_rest_a(t_info *info, t_deque *deque_a, t_deque *deque_b, int cnt);
void	find_mindata_a(int cnt, t_find *find);
void	min_sort_a(t_deque *deque_a, t_deque *deque_b, int cnt, t_find *find);
void	min_sort_ra(t_deque *deque_a, int ra_cnt);
/*sort_five_b*/
void	lst_five_b(t_info info, t_deque *deque_a, t_deque *deque_b, int cnt);
void	lst_three_b(t_deque *deque_a, t_deque *deque_b, int cnt);
void	bthree_headsmall(t_deque *deque_a, t_deque *deque_b, const int *data);
void	bthree_headmedium(t_deque *deque_a, t_deque *deque_b, const int *data);
void	bthree_headlarge(t_deque *deque_a, t_deque *deque_b, const int *data);
/*sort_five_b2.c*/
void	lst_rest_b(t_info *info, t_deque *deque_a, t_deque *deque_b, int cnt);
void	find_mindata_b(int cnt, t_find *find);
void	min_sort_b(t_deque *deque_a, t_deque *deque_b, int cnt, t_find *find);
void	min_sort_ba(t_deque *deque_a, t_deque *deque_b, int cnt, t_find *find);

void	print_deque(t_deque *pdeque);

#endif
