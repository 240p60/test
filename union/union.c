/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 19:59:31 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/18 20:11:07 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_union(char *str1, char *str2)
{
	char ascii[256] = {0};
	int i;

	i = 0;
	while(str1[i] != '\0')
	{
		if(ascii[(int)str1[i]] == 0)
		{
			ascii[(int)str1[i]] += 1;
			ft_putchar(str1[i]);
			i++;
		}
		else
			i++;
	}
	i = 0;
	while(str2[i] != '\0')
	{
		if(ascii[(int)str2[i]] == 0)
		{
			ascii[(int)str2[i]] += 1;
			ft_putchar(str2[i]);
			i++;
		}
		else
			i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
