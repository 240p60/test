/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:06:18 by bbryen            #+#    #+#             */
/*   Updated: 2019/04/11 18:50:46 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	while (ft_strchr(str, ch) == NULL)
		return (NULL);
	while (*str)
		str++;
	while (*str != ch)
		str--;
	return ((char *)str);
}
