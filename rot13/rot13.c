/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 18:17:34 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/17 18:34:22 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;
	int rot;

	i = 0;
	rot = 13;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 65 && argv[1][i] <= 90)
				ft_putchar((((argv[1][i] - 65) + rot) % 26) + 65);
			else if(argv[1][i] >= 97 && argv[1][i] <= 122)
				ft_putchar((((argv[1][i] - 97) + rot) % 26) + 97);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
