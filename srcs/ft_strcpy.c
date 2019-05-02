#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	size = 0;
	str = NULL;
	while (src[size])
		size++;
	if (!(str = malloc(sizeof(char) * size)))
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}
