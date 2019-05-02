#include "libft.h"

size_t		ft_strlen(const char *s)
{
	size_t	i;

	if (s == NULL)
		return (0);
	else
		while(s[i])
			i++;
	return (i);
}
