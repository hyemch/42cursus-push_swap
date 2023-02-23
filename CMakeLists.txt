cmake_minimum_required(VERSION 3.23)
project(push_swap C)

set(CMAKE_C_STANDARD 11)

include_directories(./inc
        ./libft)

add_executable(push_swap
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
        ./src/main.c
./src/parsing.c
./src/check_arg.c
./src/deque.c
./src/deque_utils.c
./src/sort_intarr.c
./src/sort_list.c
./src/a_to_b.c
./src/b_to_a.c
./src/sort_five_a.c
./src/sort_five_a2.c
./src/sort_five_b.c
./src/sort_five_b2.c
./src/sort_onlyfive.c
./src/sort_onlyfour.c
./src/sort_onlythree.c
./src/operations_push.c
./src/operations_swap.c
./src/operations_rotate.c
./src/operations_reverse.c)
