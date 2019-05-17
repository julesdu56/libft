
NAME = libft.a

FLGS =-Wall -Wextra -Werror

SRCS = ft_isalnum.c\
	  ft_isalpha.c\
	  ft_isascii.c\
	  ft_isdigit.c\
	  ft_islower.c\
	  ft_isupper.c\
	  ft_isprint.c\
	  ft_strcmp.c\
	  ft_strncmp.c\
	  ft_strdup.c\
	  ft_strlen.c\
	  ft_memcmp.c\
	  ft_memset.c\
	  ft_bzero.c\
	  ft_atoi.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memset.c\
	  ft_memmove.c\
	  ft_memchr.c\
	  ft_strcpy.c\
	  ft_strncpy.c\
	  ft_strcat.c\
	  ft_strncat.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strstr.c\
	  ft_strnstr.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_memalloc.c\
	  ft_memdel.c\
	  ft_putchar.c\
	  ft_putchar_fd.c\
	  ft_putstr.c\
	  ft_putstr_fd.c\
	  ft_strclr.c\
	  ft_strdel.c\
	  ft_strnew.c\
	  ft_strtrim.c\
	  ft_strsub.c\
	  ft_strnequ.c\
	  ft_strmapi.c\
	  ft_strmap.c\
	  ft_strjoin.c\
	  ft_striter.c\
	  ft_strequ.c\
	  ft_putnbr_fd.c\
	  ft_putnbr.c\
	  ft_putendl_fd.c\
	  ft_putendl.c\
	  ft_strlcat.c\
	  ft_strsplit.c\
	  ft_count_digit.c\
	  ft_itoa.c\
	  ft_striteri.c\

OBJS =$(SRCS:%.c=%.o)

INC =-I includes

CFLAGS = -I includes/ $(FLGS)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
