#include "libft.h"

void		ft_putchar(char c);

void		ft_putnbr(int n)
{
	long long nb;

	nb = (int)n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
