#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

typedef enum fildes{
    files,
}           t_fd;

char	*get_next_line(int fd);
int		ft_getsize(int fd);

#endif