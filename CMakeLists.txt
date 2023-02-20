cmake_minimum_required(VERSION 3.23)
project(push_swap C)

set(CMAKE_C_STANDARD 11)

include_directories(.
        ./libft)

add_executable(push_swap
        push_swap.h
        push_swap.c
        parsing.c
        check_arg.c
        deque.c
        deque_utils.c
        sort_intarr.c
        sort_list.c
        a_to_b.c
        b_to_a.c
        sort_five_a.c
        sort_five_a2.c
        sort_five_b.c
        sort_five_b2.c
        sort_onlyfive.c
        sort_onlyfour.c
        sort_onlythree.c
        operations_push.c
        operations_swap.c
        operations_rotate.c
        operations_reverse.c
        ./libft/ft_calloc.c
        ./libft/ft_strjoin.c
        ./libft/ft_strlcpy.c
        ./libft/ft_memset.c
        ./libft/ft_strlcat.c
        ./libft/ft_strlen.c
        ./libft/ft_atoi.c
        ./libft/ft_split.c)
