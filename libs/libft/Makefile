SRC_PATH = src
INCLUDE_PATH = include
BUILD_PATH = build

NAME = libft.a

CC = cc
CFLAGS = -g -I$(INCLUDE_PATH) -Wall -Wextra -Werror
AR = ar rcs

SRCS = src/ft_putchar_fd.c \
		src/ft_putstr_fd.c \
		src/ft_putendl_fd.c \
		src/ft_putnbr_fd.c \
		src/ft_isalpha.c \
		src/ft_isdigit.c \
		src/ft_isalnum.c \
		src/ft_isprint.c \
		src/ft_tolower.c \
		src/ft_toupper.c \
		src/ft_isascii.c \
		src/ft_atoi.c \
		src/ft_memset.c \
		src/ft_memcpy.c \
		src/ft_memmove.c \
		src/ft_memchr.c \
		src/ft_memcmp.c \
		src/ft_strlen.c \
		src/ft_strlcpy.c \
		src/ft_strlcat.c  \
		src/ft_strdup.c \
		src/ft_strncmp.c \
		src/ft_strchr.c \
		src/ft_strrchr.c \
		src/ft_strnstr.c \
		src/ft_substr.c \
		src/ft_strjoin.c \
		src/ft_strtrim.c \
		src/ft_striteri.c \
		src/ft_strmapi.c \
		src/ft_split.c \
		src/ft_itoa.c \
		src/ft_bzero.c \
		src/ft_calloc.c \
		src/ft_lstnew.c \
		src/ft_lstsize.c \
		src/ft_lstlast.c \
		src/ft_lstadd_front.c \
		src/ft_lstadd_back.c \
		src/ft_lstdelone.c \
		src/ft_lstclear.c \
		src/ft_lstiter.c \
		src/ft_lstmap.c

OBJS = $(SRCS:$(SRC_PATH)/%.c=$(BUILD_PATH)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)
	@echo "\033[32mLibray $(NAME) archived complited!\033[0m\033[m"

$(BUILD_PATH)/%.o: $(SRC_PATH)/%.c | $(BUILD_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_PATH):
	mkdir -p $@

clean:
	rm -rf $(BUILD_PATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
