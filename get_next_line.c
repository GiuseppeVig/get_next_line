/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:01:13 by gvigilan          #+#    #+#             */
/*   Updated: 2023/04/07 19:01:13 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_line(int fd, char *c)
{
	char	*str;
	int		i;

	str = (char *)malloc(BUFFER_SIZE + 1);
	if (!str)
		return (0);
	i = 1;
	while (!has_new_line(c) && i != 0)
	{
		i = read(fd, str, BUFFER_SIZE);
		if (i == -1)
		{
			free(str);
			return (0);
		}
		str[i] = '\0';
		c = ft_join(c, str);
	}
	free(str);
	return (c);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*output;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	line = read_line(fd, line);
	if (!line)
		return (0);
	output = get_output(line);
	line = reset_line(line);
	return (output);
}
