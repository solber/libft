#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}



int	main()
{
	size_t n = 2;
	size_t i = 0;

	int	c = 'O';
	

	char ms[5] = "snow";
	char fts[5] = "snow";
	char *resmemset;
	char *resftmemset;

	resmemset = (char *)malloc(sizeof(ms));
	resftmemset = (char *)malloc(sizeof(fts));

	ft_putstr("TEST - ");
	ft_putstr(ms);
	resmemset = memset(ms, c, n);
	resftmemset = ft_memset(fts, c, n);
	ft_putstr(" - ");
	ft_putchar(c);
	ft_putstr(" - ");
	ft_putchar(n + '0');
	ft_putstr(" - MEMSET : ");
	ft_putstr(resmemset);
	ft_putstr(" - FT_MEMSET : ");
	ft_putstr(resftmemset);
	ft_putchar(' ');

	while (i < n)
	{
		if (resmemset[i] == resftmemset[i])
		{

			if (i == n - 1)
				ft_putstr("\x1B[32m SUCCESS\n");
		}
		else
		{
			ft_putstr("\x1B[31m ERROR\n");
			break;
		}
		i++;
	}
	i = 0;
	ft_putstr("\x1B[0m");

	return (0);
}

