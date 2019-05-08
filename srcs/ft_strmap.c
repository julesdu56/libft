#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char 	*str;
	size_t	len;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	if(!(str = ft_strnew(len)))
	i = 0;
	while (i < len)
	{
		str[i] = f(s[i])
		i++:
	}
	return(str);
}
