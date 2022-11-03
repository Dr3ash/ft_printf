/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:53:31 by alenzini          #+#    #+#             */
/*   Updated: 2022/11/02 17:54:02 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list		arg_n;
	int			i;
	int			len;

	va_start(arg_n, s);
	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == '%' && ++i)
			len += print(s, &i, arg_n);
		else
			len += ft_putchar(s[i++]);
	}
	va_end(arg_n);
	return (len);
}
