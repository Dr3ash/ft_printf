/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:17:57 by alenzini          #+#    #+#             */
/*   Updated: 2022/10/15 00:03:30 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*controlla se il numero inserito riporta ad un carattere stampabile della
tabella ascii */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
