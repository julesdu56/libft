void		ft_putchar_fd(char c, int fd
{
	write(fd, &c, 1);
}

void		ft_putstr_fd(char const *s, int fd)
{
	int i;

	i = 0;
	while(s[i])
	{
		ft_putchar_fd(str[i]);
		i++;
	}
}
