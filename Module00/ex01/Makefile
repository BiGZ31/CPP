PROG = phonebook

SRCS = phonebook.cpp
OBJS = ${SRCS:.cpp=.o}

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Rule to compile .cpp files into object files
.cpp.o:
	@$(CC) ${CFLAGS} -c $< -o $@

all: ${PROG}

${PROG}: ${OBJS}
	@$(CC) ${OBJS} -o ${PROG}
	@echo "\033[32mPhoneBook Compiled!"

clean:
	@rm -f ${OBJS} ${PROG}
	@echo "\033[0;31mCleaned files!"

re: clean all

fclean: clean

.PHONY: all clean
