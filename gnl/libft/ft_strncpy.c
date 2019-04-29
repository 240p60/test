/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 20:25:36 by bbryen            #+#    #+#             */
/*   Updated: 2019/04/10 20:43:46 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *source, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count && source[i] != '\0')
	{
		dest[i] = source[i];
		i++;
	}
	while (i < count)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
