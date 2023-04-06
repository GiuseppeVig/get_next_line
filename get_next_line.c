#include "get_next_line.h"

char	*get_next_line(int fd)
{
    int		size;
    char*	line;

	size = ft_getsize(fd);
	line = (char *)malloc(size + 1);
	if (!(read(fd, line, size)))
		return (0);
	if (!line)
		return (0);
	read(fd, line, size);
	free(line);
	return (line);
}