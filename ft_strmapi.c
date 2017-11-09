#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	if (!(res = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = -1;
	while (*(s + ++i))
		*(res + i) = f(i, *(s + i));
	return (res);
}
