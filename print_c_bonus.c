/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:02:31 by alenzini          #+#    #+#             */
/*   Updated: 2022/11/02 18:02:46 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	instruction_c(int c, t_spec spec, int *ins)
{
	int	i;
	int	len;

	len = 0;
	i = -1;
	while (ins[++i])
	{
		if (ins[i] == 1)
			len += ft_putchar(c);
		else if (ins[i] == 2)
			len += print_width(spec.width, 1, ' ');
	}
	free(ins);
	return (len);
}

int	print_c(int c, t_spec spec)
{
	int	*ins;

	if (!(spec.flag % 2))
		ins = get_instruction(2, 1, 2);
	else
		ins = get_instruction(2, 2, 1);
	return (instruction_c(c, spec, ins));
}
