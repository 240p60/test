/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:25:15 by bbryen            #+#    #+#             */
/*   Updated: 2019/04/12 22:45:00 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (0);
	if (!(str1) && !(str2))
		return (0);
	while (str1[i] == str2[i] && str1[i] != '\0' && i < len - 1)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
