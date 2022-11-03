/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:00:05 by alenzini          #+#    #+#             */
/*   Updated: 2022/10/15 16:35:09 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//alloca memoria
void	*ft_calloc(size_t count, size_t size)
{
	unsigned int		s;
	char				*ptr;

	s = count * size;
	ptr = malloc(s);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, s);
	return (ptr);
}
