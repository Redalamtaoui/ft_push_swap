CC = cc
NAME = push_swap
NAME_B = checker
CFLAGS = -Wall -Wextra -Werror

source =  push_swap.c parsing.c ft_p.c ft_s.c ft_rr.c ft_r.c ft_sort_list.c ft_initial_and_free.c ft_sort_list2.c ft_sort_3_5.c\
utils/ft_atoi_pro.c utils/ft_bzero.c utils/ft_calloc.c utils/ft_clear_lst.c utils/ft_lst_add_back.c utils/ft_lstadd_front.c utils/ft_lst_new_pro.c\
utils/ft_split.c utils/ft_strchr.c utils/ft_strcmp.c utils/ft_strdup.c utils/ft_strjoin.c utils/ft_strlen.c utils/get_next_line.c

source_bonus =  cheaker.c parsing.c ft_p.c ft_s.c ft_rr.c ft_r.c ft_sort_list.c ft_initial_and_free.c ft_sort_list2.c ft_sort_3_5.c\
utils/ft_atoi_pro.c utils/ft_bzero.c utils/ft_calloc.c utils/ft_clear_lst.c utils/ft_lst_add_back.c utils/ft_lstadd_front.c utils/ft_lst_new_pro.c\
utils/ft_split.c utils/ft_strchr.c utils/ft_strcmp.c utils/ft_strdup.c utils/ft_strjoin.c utils/ft_strlen.c utils/get_next_line.c

INC = libft.h
INC_B = libft.h

obj = $(source:.c=.o)
obj_bonus = $(source_bonus:.c=.o)
all:$(NAME)

$(NAME): $(obj) $(INC)
	$(CC)  $(CFLAGS) $(obj)  -o $(NAME)

clean	:
	rm -fr $(obj) $(obj_bonus)
fclean	: clean
	rm -fr $(NAME) $(NAME_B)

re: fclean all

$(NAME_B):$(obj_bonus) $(INC_B)
	$(CC)  $(CFLAGS) $(obj_bonus) -o $(NAME_B)
bonus: $(NAME_B)


.SECONDARY : $(obj) $(obj_bonus) $(INC) $(INC_B)