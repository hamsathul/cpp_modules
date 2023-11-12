NAME = thejobofyourdreams
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = Account.cpp tests.cpp
INCLUDES = account.hpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}:${OBJ}
		${CC} ${CXXFLAGS} -I ${INCLUDES} ${OBJ} -o $(NAME)

fclean: clean
		@rm -rf ${NAME}

clean: 
		@rm -rf ${OBJ}

re: fclean all