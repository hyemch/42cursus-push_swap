CC 		=	cc
CFLAGS	=	-Wall -Wextra -Werror

NAME	= 	push_swap
INC_DIR	=	-I./inc

INC		=	$(INC_DIR)/push_swap.h

SRC		=	src/push_swap.c \
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

OBJ		=	$(SRC:%.c=%.o)

RM		=	rm -f

all		:	$(NAME)

%.o : %.c
	$(CC) $(CFLAGS) $(INC_DIR) -c $< -o $@

$(NAME)	:	$(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re