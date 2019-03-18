/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 22:27:57 by bbryen            #+#    #+#             */
/*   Updated: 2019/03/18 22:41:18 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef int t_bool;

#define TRUE 1

#define FALSE 0

#define SUCCESS 0

#define EVEN_MSG "I have an even number of arguments.\n"

#define ODD_MSG "I have an odd number of arguments.\n"

#define EVEN(nbr) nbr % 2
