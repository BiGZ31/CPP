PROG    = megaphone

SRCS     = Megaphone.cpp
OBJS     = ${SRCS:.cpp=.o}
MAIN    = Megaphone.cpp

CC         = g++
CFLAGS     = -Wall -Wextra -Werror -std=c++98

.c.o:        %.o : %.c
	@g++ ${CFLAGS} ${HEADER} -o $(<:.c=.o)

all:         ${PROG}

${PROG}:    ${OBJS}
						@$(CC) ${OBJS} -o ${PROG}
						@echo "\033[32mMegaphone Compiled!"

clean:
						@rm -f ${OBJS} ${OBJS_B}

fclean:     clean
						@rm -f $(NAME)
						@rm -f ${PROG}
						@echo "\033[31mDeleting!"

re:            fclean all

.PHONY: all clean fclean re%