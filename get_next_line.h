/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ftourret <ftourret@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 14:46:07 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 16:26:46 by ftourret    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 42

# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

int		get_next_line(int const fd, char **line);

#endif
