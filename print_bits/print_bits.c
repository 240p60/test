/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 22:20:01 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/14 22:31:57 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int i;
	int count;

	i = 0;
	count = 128;
	while (count != 1)
	{
		if (octet / count == 1)
		{
			ft_putchar('1');
			octet = octet - count;
		}
		else
			ft_putchar('0');
		count = count / 2;
	}
	if (octet == 1)
		ft_putchar('1');
	else
		ft_putchar('0');
	ft_putchar('\n');
}

int		main(void)
{
	print_bits(255);
	return (0);
}
