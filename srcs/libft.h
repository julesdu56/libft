#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t		ft_strlen(const char *s);
void		ft_putendl(char const *s);
void		ft_putnbr(int n);
void		ft_putchar(char c);
void		ft_putstr(char const *str);
char		*ft_strcat(char *dest, const char *src);
int		ft_atoi(char *str);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		*ft_itoa(int n);
char		**ft_strsplit(char const *s, char c);
char		*ft_strtrim(char const *s);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strmap(char const *s, char (*f)(char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_striter(char *s, void (*f)(char));
void		ft_strclr(char *s);
void		ft_strdel(char **as);
char		*ft_strnew(size_t size);
void		ft_memdel(void **ap);
void		*ft_memalloc(size_t size);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strstr(const char *s1, const char *s2);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);



#endif
