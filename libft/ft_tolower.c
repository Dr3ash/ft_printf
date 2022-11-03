/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:55:43 by alenzini          #+#    #+#             */
/*   Updated: 2022/10/15 00:06:01 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*converte un carattere ascii da maiuscolo a minuscolo*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c +('a' - 'A'));
	return (c);
}
