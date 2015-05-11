# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/29 00:15:17 by lubaujar          #+#    #+#              #
#    Updated: 2015/05/07 18:40:07 by sksourou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
RM = rm -rf
FLAGS = -g -Wall -Wextra -Werror
LDFLAGS = -I./includes/ -I./libft/include/

SRC = check_error.c \
		swap_a_b.c  resolve.c \
		main.c 	swap_pa_pb.c	swap.c \

OBJ = $(SRC:.c=.o)
	SRCDIR	= ./src/
	OBJDIR	= ./obj/
	INCDIR	= ./include/
	SRCS	= $(addprefix $(SRCDIR), $(SRC))
	OBJS	= $(addprefix $(OBJDIR), $(OBJ))
	INCS	= $(addprefix $(INCDIR), $(INC))

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	@gcc $(FLAGS) -o $@ $^ -L./libft/  -lft
	@echo "\n\t \033[32m[All Fine's]\033[0m\n"

$(OBJS): $(SRCS)
	make -C libft/
	@gcc $(FLAGS) -c $(SRCS) $(LDFLAGS)
	@echo "\\033[1;34mGenerating objects... Please wait.\\033[0;39m"
	@mkdir -p $(OBJDIR)
	@mv $(OBJ) $(OBJDIR)

clean:
	@echo "\nRM *.o.. \t      \033[32mOK BITCH!\033[0m"
	@$(RM) $(OBJS)
	@$(RM) *.o

fclean: clean
	make fclean -C libft/
	@echo "RM ./ft_ls.. \t      \033[32mOK BITCH!\033[0m"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
