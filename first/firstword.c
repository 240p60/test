/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:42:11 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/14 20:11:53 by bbryen           ###   ########.fr       */
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

	i = 0;
	if (argc == 2)
	{
		while ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == ' ')
			i++;
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == ' ')
			{
				ft_putchar('\n');
				return (0);
			}
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
