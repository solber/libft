#include <libft.h>

static size_t	ft_nbrlen(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*res;
	unsigned int	nbr;
	size_t			res_len;
	

	res_len = ft_nbrlen(n);
	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		res_len++;
	}
	if (!(res = ft_strnew(res_len)))
		return (NULL);
	res[--res_len] = nbr % 10 + '0';
	while (nbr /= 10)
		res[--res_len] = nbr % 10 + '0';
	if (n < 0)
		*(res + 0) = '-';
	return (res);
}
