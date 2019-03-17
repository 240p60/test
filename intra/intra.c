/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 00:45:41 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/18 00:56:28 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	intra(char *str1, char *str2)
{
	int i;
	char ascii[256] = {};

	i = 0;
	while(str2[i] != '\0')
	{
		ascii[(int)str2[i]] = 1;
		i++;
	}
	i = 0;
	while(str1[i] != '\0')
	{
		if(ascii[(int)str1[i]] == 1)
		{
			ft_putchar(str1[i]);
			ascii[(int)str1[i]] = 0;
			i++;
		}
		else
			i++;
	}
}

int 	main(int argc, char *argv[])
{
	if (argc == 3)
		intra(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
