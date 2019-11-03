#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;

	i = 0;
	if (s == NULL || !(str = ft_strnew(len)))
		return (NULL);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;	
	}
	str[i] = '\0';
	return (str);
}
