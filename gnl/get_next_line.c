/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbryen <bbryen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 05:44:26 by bbryen            #+#    #+#             */
/*   Updated: 2019/04/29 21:53:00 by bbryen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_strchr_zero(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c && s[i] != 0)
		s++;
	if (s[i] == (char)c)
		s[i] = 0;
	return (s[i]);
}

static int	str_process(char *input, char **result)
{
	char		*tmp;
	char		*tmp2;

	if (ft_strchr(input, '\n'))
	{
		tmp = ft_strdup(input);
		ft_strcpy(input, ft_strchr(input, '\n') + 1);
		ft_strchr_zero(tmp, 10);
		tmp2 = *result;
		*result = ft_strjoin(*result, tmp);
		free(tmp);
		free(tmp2);
		return (1);
	}
	tmp = *result;
	*result = ft_strjoin(*result, input);
	free(tmp);
	ft_bzero(input, BUFF_SIZE);
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static char	*buff[10000];

	if (fd < 0 || fd > 10000 || line == NULL ||
			read(fd, buff[fd], 0) < 0 || BUFF_SIZE <= 0)
		return (-1);
	if (!buff[fd])
		buff[fd] = ft_strnew(BUFF_SIZE);
	*line = ft_strnew(0);
	if (*buff[fd])
		if (str_process(buff[fd], line))
			return (1);
	ft_bzero(buff[fd], BUFF_SIZE);
	while (read(fd, buff[fd], BUFF_SIZE))
		if (str_process(buff[fd], line))
			return (1);
	if (**line == 0)
		return (0);
	return (1);
}
