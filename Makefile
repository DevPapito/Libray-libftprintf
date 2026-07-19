MAKEFLAGS	:=	--silent
NAME	:=	libftprintf.a
AR		:=	ar rcs
CC		:=	cc
CFLAGS	:=	-g -Wall -Wextra -Werror

SRC		:=	src
INCLUDE	:=	include
BUILD	:=	build
LIBS	:=	libs
HEADER	:=	-I $(INCLUDE) -I $(LIBS)/libft/include

# libft.a
LIBFT			:=	$(LIBS)/libft/libft.a

SRCS		:=	src/ft_printf.c \
				src/ft_utils.c \
				src/ft_handler.c
OBJS		:=	$(SRCS:$(SRC)/%.c=$(BUILD)/%.o)

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBS)/libft

$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) temp.a
	mkdir temp_dir
	cd temp_dir && ar x ../$(LIBFT)
	$(AR) $(NAME) $(OBJS) temp_dir/*.o
	ranlib $(NAME)
	rm -rf temp_dir
	rm -rf temp.a
	printf "\n\033[32mLibrary $(NAME) is ready!\033[0m\n\n"

$(BUILD)/%.o: $(SRC)/%.c | $(BUILD)
	$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

$(BUILD):
	mkdir -p $(BUILD)

clean:
	$(MAKE) -C $(LIBS)/libft clean
	rm -rf $(BUILD)

fclean: clean

	$(MAKE) -C $(LIBS)/libft fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
