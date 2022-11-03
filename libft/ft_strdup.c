/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:47:44 by alenzini          #+#    #+#             */
/*   Updated: 2022/11/02 18:30:45 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*salva una copia di una stringa con malloc*/
char	*ft_strdup(const char *s1)
{
	char	*res;
	int		i;

	res = malloc(ft_strlen(s1) + 1);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	res[i] = '\0';
	return (res);
}
