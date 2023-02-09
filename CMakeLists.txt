cmake_minimum_required(VERSION 3.23)
project(push_swap C)

set(CMAKE_C_STANDARD 11)

include_directories(.
        ./libft)

add_executable(push_swap
        push_swap.c
        push_swap.h
        deque.c
        ./libft/ft_calloc.c
        ./libft/ft_strjoin.c
        ./libft/ft_strlcpy.c
        ./libft/ft_memset.c
        ./libft/ft_strlcat.c
        ./libft/ft_strlen.c
        ./libft/ft_atoi.c
        ./libft/ft_split.c)
