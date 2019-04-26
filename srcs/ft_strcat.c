#include "libft.h"

char        *ft_strcat(char *dest, char const *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i])
        i++;
    while (src[j])
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

int     main()
{
    char    str[10];
    char    dest[4];

    str[0] = 'a';
    str[1] = 'a';
    str[2] = 'a';
    str[3] = 'a';
    str[4] = 'a';
    str[5] = 'a';
    str[6] = 'a';
    str[7] = 'a';
    str[8] = 'a';
    str[9] = 'a';
    dest[0] = 'b';
    dest[1] = 'b';
    dest[2] = 'b';
    dest[3] = '\0';

    printf("TEST: %s\n", ft_strcat(dest, str));
    return (0);
}