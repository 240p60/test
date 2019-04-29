/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 20:54:38 by bbryen            #+#    #+#             */
/*   Updated: 2019/04/19 22:33:47 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size == 18446744073709551615U)
		return (0);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (0);
	ft_memset(str, 0, size + 1);
	return (str);
}
