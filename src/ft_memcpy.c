#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (!n || dest == src)
		return (0);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

int	main()
{
	char src[5] = "snow";
	char dest[5];
	//int c = 'w';

	printf(memcpy(dest, src, 5));
	return (0);
}