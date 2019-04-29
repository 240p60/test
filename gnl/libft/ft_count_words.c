/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:34:20 by bbryen            #+#    #+#             */
/*   Updated: 2019/04/19 19:48:39 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	wd;

	i = 0;
	wd = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == (char)c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			wd += 1;
		while (s[i] != (char)c && s[i] != '\0')
			i++;
	}
	return (wd);
}
