#include "../includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	if (!n || dest == src)
		return (0);
	while (i < n && ((char *)src)[i] != c)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	((char *)dest)[i] = '\0';
	return (dest);
}