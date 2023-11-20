NAME = repetitivework
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
CC = c++
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}:${OBJ}
		${CC} ${CXXFLAGS} ${OBJ} -o $(NAME)

fclean: clean
		@rm -rf ${NAME}

clean:
		@rm -rf ${OBJ}

re: fclean all