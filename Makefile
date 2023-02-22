CC 		=	cc
CFLAGS	=	-Wall -Wextra -Werror -g

NAME	= 	push_swap
NAME_B	=	checker

INC_DIR	=	-I./inc

INC		=	$(INC_DIR)/push_swap.h

SRC		=	src/main.c \
			src/parsing.c \
            src/check_arg.c \
            src/deque.c \
            src/deque_utils.c \
            src/sort_intarr.c \
            src/sort_list.c \
            src/a_to_b.c \
            src/b_to_a.c \
            src/sort_five_a.c \
            src/sort_five_a2.c \
            src/sort_five_b.c \
            src/sort_five_b2.c \
            src/sort_onlyfive.c \
            src/sort_onlyfour.c \
            src/sort_onlythree.c \
            src/operations_push.c \
            src/operations_swap.c \
            src/operations_rotate.c \
            src/operations_reverse.c \
            libft/ft_calloc.c \
            libft/ft_strjoin.c \
            libft/ft_strlcpy.c \
            libft/ft_memset.c \
            libft/ft_strlcat.c \
            libft/ft_strlen.c \
            libft/ft_split.c

INC_B	=	$(addprefix $(INC_DIR),	push_swap_bonus.h \
									get_next_line_bonus.h)


SRC_B	=	bonus/main_bonus.c \
			bonus/utils_bonus.c \
			bonus/parsing_bonus.c \
			bonus/check_arg_bonus.c \
			bonus/deque_bonus.c \
			bonus/deque_utils_bonus.c \
			bonus/operations_push_bonus.c \
			bonus/operations_swap_bonus.c \
			bonus/operations_rotate_bonus.c \
			bonus/operations_reverse_bonus.c \
			bonus/get_next_line_bonus.c \
			bonus/get_next_line_utils_bonus.c \
			libft/ft_calloc.c \
			libft/ft_strjoin.c \
			libft/ft_strlcpy.c \
			libft/ft_memset.c \
			libft/ft_strlcat.c \
			libft/ft_strlen.c \
			libft/ft_split.c

OBJ		=	$(SRC:%.c=%.o)
OBJ_B	=	$(SRC_B:%.c=%.o)
RM		=	rm -f

all		:	$(NAME)

bonus	:	$(NAME_B)

%.o : %.c
	$(CC) $(CFLAGS) $(INC_DIR) -c $< -o $@

$(NAME)	:	$(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)


$(NAME_B)	:	$(OBJ_B)
	$(CC) $(CFLAGS) -o $@ $(OBJ_B)

clean	:
	$(RM) $(OBJ) $(OBJ_B)

fclean	: clean
	$(RM) $(NAME) $(NAME_B)

re : fclean all

.PHONY : all clean fclean re
