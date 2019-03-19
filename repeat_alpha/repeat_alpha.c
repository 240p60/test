/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:23:52 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/19 19:30:12 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int m;
	int res;

	i = 0;
	m = 1;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
	 	if(str[i + 1] == '+' || str[i + 1] == '-')
			return (0);
		if(str[i] == '-')
			m = -1;
		i++;	
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * m);
}

int		main(int argc, char *argv[])
{
	int i;
	int m;
	int count;

	i = 0;
	count = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				while(count <= argv[1][i] % 65)
				{
					ft_putchar(argv[1][i]);
					count++;
				}
				count = 0;
			}
			if(argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				while(count <= argv[1][i] % 97)
				{
					ft_putchar(argv[1][i]);
					count++;
				}
				count = 0;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
