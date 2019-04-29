/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:27:26 by bbryen            #+#    #+#             */
/*   Updated: 2019/04/12 21:52:19 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_strlen(str2) == 0)
		return ((char *)str1);
	while (*str1 != '\0' && len)
	{
		while (*(str1 + i) == *(str2 + i) && i < len)
		{
			if (str2[i + 1] == '\0')
				return ((char *)(str1));
			i++;
		}
		if (i >= len)
			return (0);
		str1++;
		len--;
		i = 0;
	}
	return (0);
}
