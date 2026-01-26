# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/21 18:20:24 by hezhou            #+#    #+#              #
#    Updated: 2026/01/21 18:21:17 by hezhou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
AR = ar
ARFLAGS = rcs
TEST = test.c
SRCS = ft_calloc.c ft_isascii.c ft_itoa.c ft_lstclear.c ft_lstlast.c ft_lstsize.c ft_memcpy.c ft_putchar_fd.c ft_putstr_fd.c ft_strdup.c ft_strlcat.c ft_strmapi.c ft_strrchr.c ft_tolower.c ft_atoi.c ft_isalnum.c ft_isdigit.c ft_lstadd_back.c ft_lstdelone.c ft_lstmap.c ft_memchr.c ft_memmove.c ft_putendl_fd.c ft_split.c ft_striteri.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c ft_toupper.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_lstadd_front.c ft_lstiter.c ft_lstnew.c ft_memcmp.c ft_memset.c ft_putnbr_fd.c ft_strchr.c ft_strjoin.c ft_strlen.c ft_strnstr.c ft_substr.c
SRC_BNS = 
OBJS = $(SRCS:%.c=%.o)
BONUSOBJS = $(SRCS_BNS:%.c=%.o)
CLEAN =  rm
CLFLAGS = -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

bonusx: $(BONUSOBJS)
	$(AR) $(ARFLAGS) $(NAME) $(BONUSOBJS)

ar: $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	$(CLEAN) $(CLFLAGS) $(OBJS)

fclean: clean
	$(CLEAN) $(CLFLAGS) $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all bonus clean fclean re rebonus