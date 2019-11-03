#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *str;
	size_t total;

	total = nmemb * size;
	if (!(str = malloc(sizeof(total))))
		return (NULL);
	return (ft_memset(str, 0, total));
}
