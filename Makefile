# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 12:02:15 by ayprokop          #+#    #+#              #
#    Updated: 2023/02/06 15:08:08 by ayprokop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

AR = ar

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

ARFLAGS = rc

SRCFILES = 	ft_isalpha.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_putchar_fd.c \
			ft_putnbr_fd.c \
			ft_strlcpy.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_putstr_fd.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_itoa.c \
			ft_striteri.c \
			ft_strmapi.c \
			ft_strlcat.c \
			ft_putendl_fd.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_split.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_strchr.c \
			ft_strjoin.c \

OBJFILES = ${SRCFILES:.c=.o}

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJFILES)
	$(AR) $(ARFLAGS) $(NAME) $(OBJFILES)

all : $(NAME)

fclean : clean
	rm -rf $(NAME)

clean :
	rm -rf $(OBJFILES)

re : fclean $(NAME)