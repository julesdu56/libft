#include "libft.h"
#include <stdio.h>

int     compteur_nb(int n)
{
    int i;

    i = 0;
    while (n > 0)
    {
       n = n / 10;
       i++;
    }
    return (i);
}


char    *ft_itoa(int n)
{
    char    *str;
    int     stock;
    int     len;
    int     i; 

    len = compteur_nb(n);
    i = len - 1;
    if (n < 0)
        len += 1;
    str = malloc(sizeof(char) * (len + 1));
    while(n > 0)
    {
        stock = n % 10;
        n /= 10;        
        str[i] = stock + 48;
        i--;
    }
    str[len] ='\0';
    return (str);
}


int     main(int argc, char ** argv)
{
    int i;

    i = 0;
    (void)argc;
    while (argv[i])
    {
            printf("%s", ft_itoa(ft_atoi(argv[i])));
            i++;
    }
    printf("\n");
    return (0);
}