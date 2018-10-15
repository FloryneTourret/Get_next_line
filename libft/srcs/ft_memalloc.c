/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ftourret <ftourret@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:02:20 by ftourret     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 11:43:30 by ftourret    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memalloc(size_t size)
{
	char *str;

	if (!(str = (char*)malloc(sizeof(char*) * size)))
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
