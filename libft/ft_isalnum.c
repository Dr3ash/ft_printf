/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:13:07 by alenzini          #+#    #+#             */
/*   Updated: 2022/10/14 00:14:53 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"
/*controlla se il numero passato come parametro riporta ad un carattere
alfanumerico (a-z, A-Z. 1-9) della tabella ascii */
int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
