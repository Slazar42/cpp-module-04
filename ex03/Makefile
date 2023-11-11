NAME =	materia
SRCS = AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all