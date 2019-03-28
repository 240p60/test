#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int count;
	int i;

	count = 10;
	i = 0;

	str = (char *)malloc(sizeof(char) * nbr);
	while(nbr / count > 9)
		count *= count;
	if(nbr < 0)
	{
		str[i] = '-';
		i++;
		nbr = -nbr;
	}
	while(nbr > 9)
	{
		str[i] = (nbr / count) + 48;
		i++;
		nbr = nbr % count;
		count /= 10;
	}
	str[i] = nbr + 48;
	i++;
	str[i] = '\0';
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return(str);
}

int	main(void)
{
	int nbr;

	nbr = 718;
	ft_itoa(nbr);
	return (0);
}
