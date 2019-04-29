/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:55:17 by bbryen            #+#    #+#             */
/*   Updated: 2019/04/21 02:07:16 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int		i;

	i = 0;
	if (!str1)
		return (0);
	if (ft_strlen(str2) == 0)
		return ((char *)str1);
	while (*str1 != '\0')
	{
		while (*(str1 + i) == *(str2 + i))
		{
			if (str2[i + 1] == '\0')
				return ((char *)(str1));
			i++;
		}
		str1++;
		i = 0;
	}
	return (0);
}
