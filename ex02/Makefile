NAME = FragTrap
CPP = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -f

FILES = main \
		ClapTrap \
		ScavTrap \
		FragTrap \

SRCS = $(addsuffix .cpp, $(FILES))

OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $^ -o $@

%.o: %.cpp ScavTrap.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean