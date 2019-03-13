/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:42:11 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/13 20:25:21 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		view_word(char *str)
{
	int i;
	int p;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		{
			if (str[i + 1] >= 33 && str[i + 1] <= 126)
				p = i + 1;
		}
		i++;
	}
	while (str[p] != '\0')
	{
		if ((str[p] >= 9 && str[p] <= 13) || str[p] == ' ')
			return (0);
		ft_putchar(str[p]);
		p++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		view_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
