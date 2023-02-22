/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:53:51 by hyecheon          #+#    #+#             */
/*   Updated: 2023/02/22 21:53:54 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	init_cmd_info(t_cmd_info *cmd_info)
{
	cmd_info->func[0] = pa;
	cmd_info->func[1] = pb;
	cmd_info->func[2] = ss;
	cmd_info->func[3] = rr;
	cmd_info->func[4] = rrr;
	cmd_info->func_a[0] = sa;
	cmd_info->func_a[1] = ra;
	cmd_info->func_a[2] = rra;
	cmd_info->func_b[0] = sb;
	cmd_info->func_b[1] = rb;
	cmd_info->func_b[2] = rrb;
}

static void	execute_cmd(int i, t_deque *a, t_deque *b)
{
	t_cmd_info	cmd_info;

	init_cmd_info(&cmd_info);
	if (i >= 0 && i <= 4)
	{
		cmd_info.func[i](a, b);
	}
	else if (i >= 5 && i <= 7)
	{
		cmd_info.func_a[i - 5](a);
	}
	else
	{
		cmd_info.func_b[i - 8](b);
	}
}

static void	check_lst(t_deque *a, t_deque *b)
{
	t_node	*tmp;

	tmp = a->head;
	while (tmp->next != NULL)
	{
		if (tmp->data > tmp->next->data)
		{
			write(2, "KO\n", 3);
			exit(255);
		}
		tmp = tmp->next;
	}
	if (b->head != NULL)
	{
		write(2, "KO\n", 3);
		exit(255);
	}
}

static void	get_cmd(t_deque *deque_a, t_deque *deque_b)
{
	char		*ret;
	const char	*cmd[11] = {"pa\n", "pb\n", "ss\n", "rr\n", "rrr\n", \
	"sa\n", "ra\n", "rra\n", "sb\n", "rb\n", "rrb\n"};
	int			i;

	while (1)
	{
		i = 0;
		ret = get_next_line(0);
		if (ret == NULL)
			break ;
		while (i < 11)
		{
			if (ft_strcmp(ret, cmd[i]) == 0)
			{
				execute_cmd(i, deque_a, deque_b);
				break ;
			}
			i++;
		}
		free(ret);
		if (i == 11)
			print_error();
	}
	check_lst(deque_a, deque_b);
}

int	main(int argc, char **argv)
{
	t_info	info;
	t_deque	deque_a;
	t_deque	deque_b;

	if (argc < 2)
		exit(0);
	ft_memset(&info, 0, sizeof(info));
	ft_memset(&deque_a, 0, sizeof(deque_a));
	ft_memset(&deque_b, 0, sizeof(deque_b));
	parsing_arg(&info, argc, argv);
	arr_to_deque(info, &deque_a);
	get_cmd(&deque_a, &deque_b);
	write(1, "OK\n", 3);
	free(info.ret);
	free(info.ret_arr);
	free_deque(&deque_a);
	free_deque(&deque_b);
	return (0);
}
