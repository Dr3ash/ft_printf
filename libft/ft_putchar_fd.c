/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:39:25 by alenzini          #+#    #+#             */
/*   Updated: 2022/10/26 21:13:25 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*scrive il carattere c su un file dato*/
int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
