/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:57:03 by alenzini          #+#    #+#             */
/*   Updated: 2022/11/02 18:29:14 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*converte una stringa di caratteri ASCII in un int */
int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	neg;

	res = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	neg = 1;
	if (str[i] == '-' && ++i)
		neg *= -1;
	else if (str[i] == '+')
		i++;
	while (str[i] && ft_isdigit(str[i]))
		res = res * 10 + (str[i++] - '0');
	return (res * neg);
}
