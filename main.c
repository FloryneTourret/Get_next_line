/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ftourret <ftourret@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 15:49:48 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 16:29:47 by ftourret    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

void		ft_exit(const char *str)
{
	if (str)
		ft_putendl_fd(str, 2);
	exit(1);
}

int			main(int argc, char **argv)
{
	char	*line;
	int		fd;
	int		code;
	int		len;
	int		i;
	int		j;

	i = 1;
	printf("BUFF_SIZE = %d\n**Premier FD**\n\n", BUFF_SIZE);
	while (i < argc)
	{
		j = 1;
		if ((fd = open(argv[i], O_RDONLY)) == -1)
			ft_exit("Error: Can't open file");
		while ((code = get_next_line(fd, &line)))
		{
			len = ft_strlen(line);
			printf("%d : %s\n\n", j, line);
			j++;
			free(line);
		}
		i++;
		if (i < argc)
			printf("\n**Changement de FD**\n\n");
	}
	return (0);
}
