/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:03:37 by alenzini          #+#    #+#             */
/*   Updated: 2022/11/02 18:03:51 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_ptrlen(unsigned long long n, int precis)
{
	int	len;

	len = 3;
	while (n > 15)
	{
		n /= 16;
		len++;
	}
	if (len < precis)
		return (precis);
	return (len);
}

int	ft_printptr(unsigned long long n, t_spec spec, int on)
{
	char	*set;

	set = ft_strdup("0123456789abcdef");
	if (on)
		ft_putstr("0x");
	if (n > 15)
		ft_printptr(n / 16, spec, 0);
	ft_putchar(set[n % 16]);
	free(set);
	return (ft_ptrlen(n, spec.precis));
}

int	instruction_p(unsigned long long n, t_spec spec, int *ins)
{
	int	len;
	int	i;

	len = 0;
	i = -1;
	while (ins[++i])
	{
		if (ins[i] == 1)
			len += ft_printptr(n, spec, 1);
		if (ins[i] == 2)
			len += print_width(spec.width, ft_ptrlen(n, spec.precis), ' ');
	}
	free(ins);
	return (len);
}

int	print_p(unsigned long long n, t_spec spec)
{
	int	*ins;

	if (!(spec.flag % 2))
		ins = get_instruction(2, 1, 2);
	else
		ins = get_instruction(2, 2, 1);
	return (instruction_p(n, spec, ins));
}
