# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 15:18:48 by ayprokop          #+#    #+#              #
#    Updated: 2024/03/13 15:03:53 by ayprokop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#マクロ定義
CC = cc
CFLAGS = -Werror -Wextra -Wall
RM = rm -f
NAME = libftprintf.a
OBJS = ft_printf_char.o ft_printf_str.o ft_printf_deci.o ft_printf_unsigned.o \
		ft_strreverse.o ft_printf_hex.o ft_printf.o ft_utoa.o

#生成規則
all: $(NAME)

$(NAME) : libft.a obj/$(OBJS)
	cp ./libft/libft.a libftprintf.a
	ar rc $@ $(OBJS)
	
obj/$(OBJS) : $(OBJS:.o=.c)
	$(CC) -c $(OBJS:.o=.c)
	
libft.a : 
	make -C libft

obj :
	mkdir -p obj
	
clean :
	$(RM) $(OBJS) $(OBJS_LIBFT)
fclean : clean
	$(RM) $(NAME)
re : fclean all

.PHONY : all clean fclean re