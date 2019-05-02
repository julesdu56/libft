#include "libft.h"

void		*ft_memmouve(void *dest, const void *src, size_t n)
{
	int i;

	i = (int)n - 1;
	if (dest > src)
	{
		while (i >= 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
