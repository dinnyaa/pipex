SRCS = $(shell find "." -name "*.c")
OBJS = ${SRCS:.c=.o}
NAME = pipex
CC   = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

all : ${NAME}
${NAME} : ${OBJS}
	$(MAKE) -C libft
	${CC} ${FLAGS} ${OBJS} -o ${NAME} -Llibft -lft

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
