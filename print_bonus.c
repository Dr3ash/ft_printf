/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:01:46 by alenzini          #+#    #+#             */
/*   Updated: 2022/11/02 18:02:05 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	do_print(char type, va_list arg_n, t_spec spec)
{
	if (type == 'd' || type == 'i')
		return (print_d(va_arg(arg_n, int), spec));
	else if (type == 'u')
		return (print_u(va_arg(arg_n, unsigned int), spec));
	else if (type == 'x')
		return (print_x(va_arg(arg_n, unsigned int), spec, 0));
	else if (type == 'X')
		return (print_x(va_arg(arg_n, unsigned int), spec, 1));
	else if (type == 'c')
		return (print_c(va_arg(arg_n, int), spec));
	else if (type == 's')
		return (print_s(va_arg(arg_n, char *), spec));
	else if (type == 'p')
		return (print_p(va_arg(arg_n, unsigned long long), spec));
	else
		return (print_c(type, spec));
}

int	launch_print(const char *s, int *i, va_list arg_n)
{
	t_spec	spec;

	if (!s[*i])
		return (0);
	spec.flag = get_flag(s, i);
	spec.width = get_width(s, i, &spec.flag);
	spec.precis = get_precis(s, i);
	if (!s[*i])
		return (0);
	return (do_print(s[(*i)++], arg_n, spec));
}
