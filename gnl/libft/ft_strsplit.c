/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:33:58 by bbryen            #+#    #+#             */
/*   Updated: 2019/04/19 22:37:20 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**free_tab(char **str, size_t j)
{
	while (j)
	{
		free(str[j]);
		j--;
		str[j] = NULL;
	}
	free(str);
	return (NULL);
}

static char	*ft_word(char const *s, size_t i, char c)
{
	char	*str;
	size_t	k;

	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen_mod(s, c) + 1))))
		return (0);
	k = 0;
	while (s[i] != c && s[i] != '\0')
	{
		str[k] = s[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return ((char *)str);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	wd;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	s = ft_strtrim_mod(s, c);
	wd = ft_count_words(s, c);
	if (!(str = (char **)malloc(sizeof(s) * wd + 2)))
		return (0);
	while (j < wd && s[i] != '\0')
	{
		if (!(str[j] = ft_word(s, i, c)))
			return (free_tab(str, j));
		while (*s != c && *s != '\0')
			s++;
		while (*s == c && *s != '\0')
			s++;
		j++;
	}
	str[j] = NULL;
	return (str);
}
