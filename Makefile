NAME			= document_creator
SRCS			= document_creator.c formater.c main.c menus.c
OBJS			= $(SRCS:.c=.o)
CC				= clang
LIBFT_INC_PATH	= libft/include
LIBFT_LIB_PATH	= libft/lib
LIBFT			= libft/lib/libft.a
CFLAGS			= -I$(LIBFT_INC_PATH)

all:	$(NAME)

deps:	$(LIBFT)

clean:
	rm -f $(OBJS)
	make -C libft fclean

fclean: $(clean)
	rm -f $(NAME)

re:	fclean all
$(NAME): $(OBJS) $(LIBFT)
	$(CC) -L$(LIBFT_LIB_PATH) -lft $(OBJS) -o $(NAME)

$(LIBFT):
	make -C libft
