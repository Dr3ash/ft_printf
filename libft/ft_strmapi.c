/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:37:44 by alenzini          #+#    #+#             */
/*   Updated: 2022/10/15 11:46:14 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* applica la funzione (F) a tutti i caratteri della stringa (s), creando e
restituendo un'altra stringa risultante*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		len;
	unsigned int		i;
	char				*out_str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	out_str = malloc(sizeof(char) * (len + 1));
	if (!out_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		out_str[i] = f(i, s[i]);
		i++;
	}
	out_str[i] = '\0';
	return (out_str);
}
