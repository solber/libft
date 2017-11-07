#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*res;

	if (!n)
		return (s);

	res = (unsigned char *)s;
	
	while (n--)
	{
		*res = (unsigned char)c;
		if (n)
			res++;
	}
	return (s);
}
