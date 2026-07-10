MAKEFLAGS = --silent

SRC_PATH = src
INCLUDE_PATH = include
BUILD_PATH = build
NAME = libftprintf.a

LIBFT_DIR = libs/libft
LIBFT_SRC_PATH = $(LIBFT_DIR)/src
LIBFT_INCLUDE_PATH = $(LIBFT_DIR)/include
LIBFT_BUILD_PATH = $(LIBFT_DIR)/build
LIBFT_NAME = libft.a
LIBFT_FILE = $(LIBFT_DIR)/$(LIBFT_NAME)

CC = cc
CFLAGS = -g -I$(INCLUDE_PATH) -I$(LIBFT_INCLUDE_PATH) -Wall -Werror -Wextra
LDFLAGS = -L$(LIBFT_DIR) -lft

SRCS = src/main.c
OBJS = $(SRCS:$(SRC_PATH)/%.c=$(BUILD_PATH)/%.o)

all: $(NAME)

$(LIBFT_FILE):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT_FILE)
	cp $(LIBFT_FILE) temp.a
	mkdir temp_dir
	cd temp_dir && ar x ../$(LIBFT_FILE)
	ar rcs $(NAME) $(OBJS) temp_dir/*.o
	ranlib $(NAME)
	rm -rf temp_dir
	rm -rf temp.a
	@echo "\033[32mLibray $(NAME) archived complited!\033[0m\033[m"

$(BUILD_PATH)/%.o: $(SRC_PATH)/%.c | $(BUILD_PATH)
	$(CC) -I$(INCLUDE_PATH) -c $< -o $@

$(BUILD_PATH):
	mkdir -p $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -rf $(BUILD_PATH)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
