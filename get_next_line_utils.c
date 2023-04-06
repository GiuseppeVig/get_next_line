#include "get_next_line.h"

int	ft_getsize(int fd)
{
	static int	i;
	char		c;
	
	i = 0;
	if (!(read(fd, c, 1)))
		return (0);
	c = read(fd, c, 1);
	while (c != '\n' || c != '\0')
	{
		c = read(fd, c, 1 + i);
		i ++;
	}
	i ++;
	return (i);
}