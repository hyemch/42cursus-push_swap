/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:30:24 by hyecheon          #+#    #+#             */
/*   Updated: 2023/01/29 17:30:35 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//
//void	leak(void)
//{
//	system("leaks push_swap");
//}

int	main(int argc, char **argv)
{
	t_info	info;
	t_deque	deque_a;
	t_deque	deque_b;

//	atexit(leak);
	if (argc < 2)
		error_exit("argument count error\n");
	ft_memset(&info, 0, sizeof(info));
	ft_memset(&deque_a, 0, sizeof(deque_a));
	ft_memset(&deque_b, 0, sizeof(deque_b));
	parsing_arg(&info, argc, argv);
	arr_to_deque(info, &deque_a);
	sort_arr(info, 0, info.ret_cnt - 1);
	if (info.ret_cnt <= 5)
		sort_lessfive(info, &deque_a, &deque_b, info.ret_cnt);
	else
		a_to_b(info, &deque_a, &deque_b);
	free(info.ret);
	free(info.ret_arr);
	free_deque(&deque_a);
	free_deque(&deque_b);
	return (0);
}
