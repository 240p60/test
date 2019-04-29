/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 02:45:21 by bbryen            #+#    #+#             */
/*   Updated: 2019/04/16 03:15:06 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	if (s && f)
	{
		if (!(str = ft_strnew(ft_strlen(s))))
			return (0);
		i = 0;
		while (s[i])
		{
			str[i] = (*f)(s[i]);
			i++;
		}
		return (str);
	}
	return (0);
}
