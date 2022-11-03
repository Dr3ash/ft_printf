/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:49:05 by alenzini          #+#    #+#             */
/*   Updated: 2022/10/14 09:49:46 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*applica una funzione a tutti i caratteri di una stringa, operando direttamente
sulla stringa*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !(*s) || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		++i;
	}
}
