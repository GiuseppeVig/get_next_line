/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:23:07 by gvigilan          #+#    #+#             */
/*   Updated: 2023/04/08 17:23:07 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*get_output(char *total)
{
	size_t	i;
	char	*out;

	i = 0;
	while (total[i] && total[i] != '\n')
		i ++;
	out = (char *)malloc(sizeof(char) * i + 2);
	i = 0;
	while (total[i] && total[i] != '\n')
	{
		out[i] = total[i];
		i ++;
	}
	if (total[i] == '\n')
		out [i++] = '\n';
	out[i] = '\0';
	return (out);
}

int	has_new_line(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_join(char *s1, char *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = (char *)malloc(1);
		s1[0] = '\0';
	}
	joined = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	while (s1[i])
	{
		joined[i] = s1[i];
		i ++;
	}
	j = 0;
	while (s2[j])
	{
		joined[i + j] = s1[j];
		j ++;
	}
	joined[i + j] = '\0';
	return (joined);
}

char	*reset_line(char *str)
{
	char	*temp;
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	temp = (char *)malloc(ft_strlen(str) - i + 1);
	j = 0;
	i ++;
	while (str[i])
		temp[j++] = str[i++];
	temp[j] = '\0';
	free(str);
	return (temp);
}
