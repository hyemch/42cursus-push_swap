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

#include "push_swap_bonus.h"
#include "get_next_line_bonus.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	print_deque(t_deque *pdeque)
{
	t_node	*curr;

	curr = pdeque->head;
	printf("lst : ");
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

static int	ft_strcmp(const char *s1, const char *s2)
{
	size_t				i;
	unsigned char		*sptr1;
	unsigned char		*sptr2;

	sptr1 = (unsigned char *)s1;
	sptr2 = (unsigned char *)s2;
	i = 0;
	while (sptr1[i] != '\0' || sptr2[i] != '\0')
	{
		if (sptr1[i] != sptr2[i])
			return (sptr1[i] - sptr2[i]);
		i++;
	}
	return (0);
}

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

static void	execute_cmd(int i, const char **cmd, t_deque *a, t_deque *b)
{
	(void)cmd;
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

//static  void	check_lst(t_deque *deque_a, t_deque *deque_b)
//{
//	int *tmp;
//
//	tmp = deque_a->head;
//
//}

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
				execute_cmd(i, cmd, deque_a, deque_b);
				break ;
			}
			i++;
		}
		if (i == 11)
		{
			write(2, "KO\n", 3);
			exit(255);
		}
	}
//	check_lst(deque_a, deque_b);
	write(1, "OK\n", 3);
	print_deque(deque_a);
	print_deque(deque_b);
	exit(0);
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
	free(info.ret);
	free(info.ret_arr);
	free_deque(&deque_a);
	free_deque(&deque_b);
	return (0);
}
