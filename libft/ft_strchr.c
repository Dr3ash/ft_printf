/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:47:03 by alenzini          #+#    #+#             */
/*   Updated: 2022/10/24 18:29:38 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*cerca l'indirizzo in una stringa (il primo che trova) che ha come valore il
carattere passato*/
char	*ft_strchr(const char *s, int c)
{
	while ((unsigned char) *s != '\0' && (unsigned char) c
		!= (unsigned char) *s)
		s++;
	if ((unsigned char) c == (unsigned char) *s)
		return ((char *)s);
	return (0);
}
