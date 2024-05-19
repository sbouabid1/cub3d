CC = cc
CFLAGS = -Wall -Wextra -Werror -g #-fsanitize=address
# CFLAGS = -g -fsanitize=address
SRCF = main.c ./src/utils.c ./src/start_parsing.c ./src/parsing_map_name.c ./src/parsing_map_color.c \
		./src/parsing_map_values.c ./src/list.c ./src/parsing_map.c
LIBFT =	./libft/ft_strtrim.c ./libft/ft_strlen.c ./libft/ft_substr.c ./libft/ft_split.c\
		 ./libft/ft_strcmp.c ./libft/ft_memset.c ./libft/ft_atoi.c ./libft/ft_strdup.c
GNL = ./gnl/get_next_line.c ./gnl/get_next_line_utils.c

OBJF = $(SRCF:.c=.o)
LIBFT_OBJF = $(LIBFT:.c=.o)
GNL_OBJF = $(GNL:.c=.o)
RM = rm -f
NAME = cub3D

all: $(NAME)


$(NAME): $(OBJF) $(LIBFT_OBJF) $(GNL_OBJF)
	$(CC) $(CFLAGS) $(OBJF) $(LIBFT_OBJF) $(GNL_OBJF) -o $(NAME)


clean:
	$(RM) $(OBJF) $(LIBFT_OBJF) $(GNL_OBJF)
fclean: clean
	$(RM) $(NAME)
