#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;

	i = 0;
	while (i > n)
	{
		while (((unisgned char *)s1)[i] == ((unsigned char *)s2)[i])
				i++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
