#include "libft.h"

void		ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void		ft_putendl_fd(char const *s, int fd)
{
	int i;

	i = 0;
	while(s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putendl(av[1], av[2]);
	}
	return (0);
}
