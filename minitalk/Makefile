NAME =  minitalk

CLIENT = client

SERVER = server

SRCS_SERVER	= server.c

SRCS_CLIENT	= client.c

OBJS_SERVER	= ${SRCS_SERVER:.c=.o}

OBJS_CLIENT	= ${SRCS_CLIENT:.c=.o}

LIB	= make -C ./libft

CC =    gcc

CFLAGS =        -Wall -Wextra -Werror

RM =    rm -rf

$(NAME): ${SERVER} ${CLIENT}

server	:		$(OBJS_SERVER)
				$(LIB)
				$(CC) $(CFLAGS) $(OBJS_SERVER) libft/libft.a -o $(SERVER)

client	:	$(OBJS_CLIENT)
			$(LIB)
			$(CC) $(CFLAGS) $(OBJS_CLIENT) libft/libft.a -o $(CLIENT)

clean	:
			$(RM) $(OBJS_CLIENT)
			$(RM) $(OBJS_SERVER)

fclean	:	clean
			$(RM) $(CLIENT)
			$(RM) $(SERVER)
			cd ./libft && make fclean

all		:		$(NAME)

re		:		fclean all

.PHONYm	:		clean fclean all re bonus
