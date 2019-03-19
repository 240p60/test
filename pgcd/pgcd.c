/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 17:06:14 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/19 20:54:24 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char *argv[])
{
	int num1;
	int num2;
	int delimetr;
	int m;
	int m1;
	int m2;

	delimetr = 1;
	if(argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		while(delimetr <= num1)
		{
			if(num1 % delimetr == 0)
				m1 = delimetr;
			if(num2 % delimetr == 0)
				m2 = delimetr;
			if(m1 == m2)
				m = m1;
			delimetr++;
		}
		printf("%d", m);
	}
	printf("\n");
}
