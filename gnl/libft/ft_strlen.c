/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 18:07:20 by bbryen            #+#    #+#             */
/*   Updated: 2019/04/21 08:43:24 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t			i;
	unsigned char	*str1;

	if (!str)
		return (0);
	str1 = (unsigned char *)str;
	i = 0;
	while (str1[i] != '\0')
		i++;
	return (i);
}
