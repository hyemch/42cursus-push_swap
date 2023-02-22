cmake_minimum_required(VERSION 3.23)
project(push_swap C)

set(CMAKE_C_STANDARD 11)

include_directories(./inc
        ./libft)

add_executable(push_swap_bonus
        ./inc/push_swap_bonus.h
        ./inc/get_next_line_bonus.h
        ./libft/ft_calloc.c
        ./libft/ft_strjoin.c
        ./libft/ft_strlcpy.c
        ./libft/ft_memset.c
        ./libft/ft_strlcat.c
        ./libft/ft_strlen.c
        ./libft/ft_atoi.c
        ./libft/ft_split.c
        ./bonus/main_bonus.c
        ./bonus/parsing.c
        ./bonus/check_arg.c
        ./bonus/deque.c
        ./bonus/deque_utils.c
        ./bonus/operations_push.c
        ./bonus/operations_swap.c
       ./bonus/operations_rotate.c
       ./bonus/operations_reverse.c
       ./bonus/get_next_line.c
       ./bonus/get_next_line_utils.c)
