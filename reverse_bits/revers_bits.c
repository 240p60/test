/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revers_bits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 02:24:49 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/21 19:02:01 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char nb)
{
	int i;
	int z;

	i = 0;
	z = 128;
	while(z > 0)
	{
		if(nb / z == 1)
		{
			ft_putchar('1');
			nb = nb % z;
			z = z / 2;
		}
		else
		{
			ft_putchar('0');
			z = z / 2;
		}
	}
}

unsigned char	reverse_bits(unsigned char nb)
{
	return (((nb >> 0) & 1) << 7) | \
		   (((nb >> 1) & 1) << 6) | \
		   (((nb >> 2) & 1) << 5) | \
		   (((nb >> 3) & 1) << 4) | \
		   (((nb >> 4) & 1) << 3) | \
		   (((nb >> 5) & 1) << 2) | \
		   (((nb >> 6) & 1) << 1) | \
		   (((nb >> 7) & 1) << 0);
}

int		main(void)
{
	unsigned char sesh;
	sesh = 48;
	print_bits(sesh);
	sesh = reverse_bits(sesh);
	ft_putchar('\n');
	print_bits(sesh);
	return (0);
}
