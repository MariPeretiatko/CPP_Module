SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
CC_FLAGS		=	-std=c++98 -Wall -Wextra -Werror -Wno-shadow -Wshadow -g
CC				=	c++
OBJS_F			= obj/


OBJS		=	$(SRCS:.cpp=.o)
OBJS_P		=	$(addprefix $(OBJS_F), $(SRCS:.cpp=.o))
NAME		= 	diamondtrap

all:$(NAME)

$(OBJS_F)%.o: %.cpp
	@mkdir -p $(OBJS_F)
	@echo "Working on: $<"
	@$(CC) $(CC_FLAGS) -O3 -c $< -o $@

$(NAME): $(OBJS_P)
	@$(CC) $(CC_FLAGS) -O3 -o $(NAME) $(OBJS_P)
	@echo "OK"

clean:
	@rm -rf $(OBJS_F)

fclean:	clean
	@rm -rf $(NAME)

re:		fclean all

.PHONY:	all clean fclean re