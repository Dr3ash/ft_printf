/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:05:25 by alenzini          #+#    #+#             */
/*   Updated: 2022/11/02 18:05:36 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	print_nbr(long long int *n, t_spec spec)
{
	int	len;

	if (!*n && !spec.precis)
		return (0);
	len = 0;
	if (*n < 0)
	{
		ft_putchar('-');
		len++;
		*n *= -1;
	}
	len += print_precis_nbr(spec.precis, ft_nbrlen(*n, 10));
	len += ft_putnbr(*n);
	return (len);
}

int	print_unsigned(unsigned int n, t_spec spec)
{
	int	len;

	if (!n && !spec.precis)
		return (0);
	len = print_precis_nbr(spec.precis, ft_nbrlen(n, 10));
	len += ft_putnbr(n);
	return (len);
}

int	print_precis_nbr(int precis, int len)
{
	int	i;

	i = -1;
	while (len + ++i < precis)
		ft_putchar('0');
	return (i);
}
