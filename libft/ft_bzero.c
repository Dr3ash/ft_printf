/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:12:24 by alenzini          #+#    #+#             */
/*   Updated: 2022/10/14 00:12:49 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//funziona come ft_memset ma assegna solo il valore 0
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
