# Имя конечного исполняемого файла
NAME = converter

# Компилятор и флаги
CC = c++
CC_FLAGS = -std=c++98 -Wall -Wextra -Werror -Wno-shadow -Wshadow -g

# Исходные файлы и директория с объектными файлами
SRCS = main.cpp ScalarConverter.cpp
OBJS_F = obj/
OBJS = $(SRCS:.cpp=.o)
OBJS_P = $(addprefix $(OBJS_F), $(OBJS))

# Правило по умолчанию
all: $(NAME)

# Правило для создания объектных файлов
$(OBJS_F)%.o: %.cpp
	@mkdir -p $(OBJS_F)
	@echo "Working on: $<"
	@$(CC) $(CC_FLAGS) -O3 -c $< -o $@

# Правило для создания исполняемого файла
$(NAME): $(OBJS_P)
	@echo "Linking..."
	@$(CC) $(CC_FLAGS) -O3 -o $@ $^
	@echo "OK"

# Очистка объектных файлов
clean:
	@rm -rf $(OBJS_F)

# Очистка объектных файлов и исполняемого файла
fclean: clean
	@rm -rf $(NAME)

# Пересборка проекта
re: fclean all

.PHONY: all clean fclean re

