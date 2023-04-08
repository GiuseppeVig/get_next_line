/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigila@student.42roma.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:59:58 by gvigilan          #+#    #+#             */
/*   Updated: 2023/04/07 18:59:58 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stddef.h>

char	*get_next_line(int fd);
char	*read_line(int fd, char *c);
size_t	ft_strlen(char *str);
int		has_new_line(char *s);
char	*ft_join(char *s1, char *s2);
char	*get_output(char *total);
char	*reset_line(char *str);

#endif