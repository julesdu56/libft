#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return (s + i);
	i--;
	}
	return (NULL);
}
		
