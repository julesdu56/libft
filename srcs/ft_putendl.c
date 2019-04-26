#include "libft.h"

void        ft_putchar(char c);

void        ft_putendl(char const *s)
{
    int i;
    while(s[i])
    {
        ft_putchar(s[i]);
        i++;
    }
    ft_putchar('\n');
}