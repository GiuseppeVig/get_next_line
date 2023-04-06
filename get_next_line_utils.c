#include "get_next_line.h"

int	ft_getsize(int fd)
{
	static int	i;
	char		*c;
	
	i = 0;
	c = (char *)malloc(BUFFER_SIZE + 1);
	read(fd, c, 1);
	if (!(read(fd, c, 1)))
		return (0);
	while (c[i] != '\n' || c)
	{
		read(fd, c, 1 + i);
		i ++;
	}
	i ++;
	return (i);
}