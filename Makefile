NAME	= document_creator
SRCS	= document_creator.c formater.c main.c menus.c
LIBFT	= libft/lib/libft.a
OBJS	= $(SRCS:.c=.o)
CC		= clang
CFLAGS	=

all:	$(NAME)

deps:	$(LIBFT)

clean:
	rm -f $(OBJS)
	make -C libft fclean

fclean: $(clean)
	rm -f $(NAME)

re:	fclean all
$(NAME): $(OBJS) $(LIBFT)
	$(CC) -Ilibft/include -Llibft/lib -lft $(OBJS) -o $(NAME)

$(LIBFT):
	make -C libft
