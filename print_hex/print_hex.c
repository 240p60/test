/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 00:05:32 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/21 02:14:44 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	print_hex(char *hex, int a, int nb)
{
	if (a > 0)
	{
		nb = a % 16;
		a = a / 16;
		print_hex(hex, a, nb);
		ft_putchar(hex[nb]);
	}
}
int		main(void)
{
	int a = 17;
	char hex[] = "0123456789abcdef";
	int nb;

	nb = 0;
	print_hex(hex, a, nb);
	ft_putchar('\n');
	return (0);
}
