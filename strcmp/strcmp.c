/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 19:20:46 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/21 19:40:26 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	while(*s1 && (*s1 == *s2))
	{
		s1 += 1;
		s2 += 2;
	}
	if (*s1 - *s2 == -128)
		return(128);
	else if (*s1 - *s2 == 128)
		return(-128);
	return (*s1 - *s2);
}

int		main(void)
{
	printf("%d\n", ft_strcmp("\200", "\0"));
	printf("%d\n", strcmp("\200", "\0"));
	return (0);
}
