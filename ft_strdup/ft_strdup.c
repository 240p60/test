/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 18:53:07 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/17 22:07:02 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *cpy;
	int i;

	i = -1;
	if(!src || !(cpy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (0);
	while(src[++i])
		cpy[i] = src[i];
	cpy[i] = '\0';
	return (cpy);
}

int		main(void)
{
	char sob[] = "Malloc chert";
	char *sob2;

	sob2 = ft_strdup(sob);
	printf("Double: %s\n", sob2);
	free(sob2);
	return (0);
}
