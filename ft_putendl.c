#include "libft.h"

void ft_putendl(char const *s)
{
	int	i;

	i = -1;
	while (s[++i])
		ft_putchar(s[i]);
	ft_putchar('\n');
}
