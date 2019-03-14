/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 16:40:45 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/14 21:52:50 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int m;
	int total;

	m = 1;
	i = 0;
	total = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			m = -m;
		if (str[i + 1] >= 48 && str[i + 1] <= 57)
			i++;
		else
			return (0);
	}
	while(str[i] >= 48 && str[i] <= 57)
	{
		total = total * 10 + (str[i] - 48);
		i++;
	}
	return (total * m);
}

void	ft_putnbr(sum)
{
	int count;

	count = 10;
	if (sum == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		sum = 147483648;
	}
	while (sum / count >= 10)
		count = count * 10;
	while (sum % count >= 0 && count > 1)
	{
		ft_putchar((sum / count) + 48);
		sum = sum % count;
		count = count / 10;
	}
	ft_putchar(sum + 48);
	ft_putchar('\n');
}

void	prime_sum(int i, int delimetr, int m, int sum, int num)
{
	while(i <= num)
	{
		while (delimetr < i)
		{
			if (i % delimetr == 0)
				m = 1;
			delimetr++;
		}
		delimetr = 2;
		if (m != 1)
			sum = sum + i;
		m = 0;
		i++;
	}
	ft_putnbr(sum);
}

int		main(int argc, char *argv[])
{
	int num;
	num = ft_atoi(argv[1]);
	int i;
	int sum;
	int m;
	int delimetr;

	i = 2;
	m = 0;
	sum = 0;
	delimetr = 2;
	if (argc == 2)
	{
		prime_sum(i, delimetr, m, sum, num);
	}
	return (0);
}
