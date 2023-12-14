# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 15:18:48 by ayprokop          #+#    #+#              #
#    Updated: 2023/12/13 21:23:57 by ayprokop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#マクロ定義
CC = gcc
CFLAGS = -Werror -Wextra -Wall
RM = rm -f
NAME = libft.a
OBJS = ft_atoi.o ft_strlen.o ft_strchr.o ft_strrchr.o ft_strncmp.o \
		ft_strnstr.o ft_strlcpy.o ft_strlcat.o ft_memcpy.o ft_memset.o \
		ft_bzero.o ft_memmove.o ft_strjoin.o ft_strdup.o ft_calloc.o \
		ft_substr.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o \
		ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
		

#生成規則
all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)
$(OBJS): $(OBJS:.o=.c)
	$(CC) -c $(OBJS:.o=.c)

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
