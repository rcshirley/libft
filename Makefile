#Compiler
CC = gcc

#Error flags
ERFLAGS = -Wall -Werror -Wextra

#Where are include files kept
INCLUDE = .

#Library
NAME = libft.a

#Header info
HEADERS_NAME = libft.h
HEADERS_PATH = .
HEADERS = $(addprefix $(HEADERS_PATH)/,$(HEADERS_NAME))


#Object info
OBJ_FILES = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o\
ft_isalpha.o ft_isascii.o ft_isdigit.o  ft_isprint.o \
ft_itoa.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o \
ft_memmove.o ft_memset.o ft_putchar_fd.o ft_putendl_fd.o\
ft_putnbr_fd.o ft_putstr_fd.o ft_split.o ft_strchr.o \
ft_strdup.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o \
ft_strlen.o ft_strmapi.o ft_strncmp.o ft_strnstr.o \
ft_strrchr.o ft_strtrim.o  \
ft_substr.o ft_tolower.o ft_toupper.o 

BONUS_OBJ = ft_lstadd_back.o ft_lstadd_front.o \
ft_lstclear.o ft_lstdelone.o ft_lstiter.o ft_lstlast.o \
ft_lstmap.o ft_lstnew.o ft_lstsize.o

#############################################

all:		$(NAME)

$(NAME):	$(HEADERS) $(OBJ_FILES)
	ar crv $(NAME) $(OBJ_FILES)
	ranlib $(NAME)
	echo "Libft compilation complete"

bonus:		$(NAME) $(BONUS_OBJ)
			ar rcs $(NAME) $(BONUS_OBJ)

%.o:		%.c $(HEADERS)
	$(CC) $(ERFLAGS) -I$(INCLUDE) -c $<

clean:
	rm -f $(OBJ_FILES) $(BONUS_OBJ)
	echo "Object files deleted"

fclean:		clean
	rm -f $(NAME)
	echo "Executable deleted"

re:			fclean all

rebonus:	fclean bonus

.PHONY: all clean fclean re bonus rebonus
