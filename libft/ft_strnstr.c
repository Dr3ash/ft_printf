/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:48:54 by alenzini          #+#    #+#             */
/*   Updated: 2022/10/15 16:03:47 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*cerca una substringa data a una stringa e ne restituisce
l'indirizzo in memoria*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	char		*bptr;
	char		*lptr;

	if (!*needle)
		return ((char *)haystack);
	while (len-- && *haystack)
	{
		if (*haystack == *needle)
		{
			i = len;
			bptr = (char *)haystack + 1;
			lptr = (char *)needle + 1;
			while (i-- && *bptr && *lptr && *lptr == *bptr)
			{
				++lptr;
				++bptr;
			}
			if (*lptr == '\0')
				return ((char *)haystack);
		}
		++haystack;
	}
	return (NULL);
}
