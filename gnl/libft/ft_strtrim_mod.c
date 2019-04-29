/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_mod.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 18:20:04 by bbryen            #+#    #+#             */
/*   Updated: 2019/04/18 22:16:02 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim_mod(char const *s, char c)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	i = 0;
	while (s[i] == c)
		i++;
	while (s[len - 1] == c && len != i)
		len--;
	len = len - i;
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	j = 0;
	while (j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
