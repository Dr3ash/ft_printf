/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:59:49 by alenzini          #+#    #+#             */
/*   Updated: 2022/11/02 18:14:07 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		ft_putchar((int) s[i++]);
	return (i);
}

int	print_nbr_len(long long int n, t_spec spec, int base)
{
	int	minus;
	int	len;

	if (!n && !spec.precis)
		return (0);
	minus = 0;
	if (n < 0)
	{
		n *= -1;
		minus++;
	}
	len = ft_nbrlen(n, base);
	if (len < spec.precis)
		return (spec.precis + minus);
	return (len + minus);
}

int	ft_putnbr(long long int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
	return (ft_nbrlen(n, 10));
}
