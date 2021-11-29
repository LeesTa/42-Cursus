NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

ARFLAGS = ar rcs

RM = rm -rf

SRCS = srcs/ft_printf.c \
	   srcs/ft_check_flags.c \
	   srcs/ft_chr.c \
	   srcs/ft_str.c \
	   srcs/ft_hex.c \
	   srcs/ft_int.c \

OBJS = $(SRCS:.c=.o)

BONUS = 

.c.o:
	$(CC) $(FLAGS) -I includes -c $< -o $(<:.c=.o)


all:	$(NAME)

$(NAME):	$(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	$(ARFLAGS) $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean:
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME) $(OBJS)
	$(RM) a.out


re: fclean all

.PHONY: all clean fclean re bonus
