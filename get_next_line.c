#include "get_next_line.h"

char	*get_next_line(int fd)
{
    static char*	line;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (0);
	line = get_line(fd);
	return (line);
}