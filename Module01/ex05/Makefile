PROG    = ex05

SRCS     = srcs/main.cpp srcs/harl.cpp
OBJS     = ${SRCS:.cpp=.o}
MAIN    = main.cpp

CC         = c++
CFLAGS     = -Wall -Wextra -Werror -std=c++98

.c.o:        %.o : %.c
	@c++ ${CFLAGS} ${HEADER} -o $(<:.c=.o)

all:         ${PROG}

${PROG}:    ${OBJS}
						@$(CC) ${OBJS} -o ${PROG}
						@echo "\033[32mProgramme Compiled!"

clean:
						@rm -f ${OBJS} ${OBJS_B}

fclean:     clean
						@rm -f $(NAME)
						@rm -f ${PROG}
						@echo "\033[31mDeleting!"

re:            fclean all

.PHONY: all clean fclean re%
