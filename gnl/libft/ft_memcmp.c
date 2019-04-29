/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:02:56 by bbryen            #+#    #+#             */
/*   Updated: 2019/04/11 15:25:36 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	char	*ubuf1;
	char	*ubuf2;
	size_t	i;

	i = 0;
	ubuf1 = (void *)buf1;
	ubuf2 = (void *)buf2;
	while (count--)
	{
		if (ubuf1[i] == ubuf2[i])
			i++;
		else
			return ((unsigned char)ubuf1[i] - (unsigned char)ubuf2[i]);
	}
	return (0);
}
