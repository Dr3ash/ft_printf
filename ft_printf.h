/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:56:19 by alenzini          #+#    #+#             */
/*   Updated: 2022/11/02 18:19:00 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(long long int n);
int	ft_puthex(unsigned int n, int upper);
int	ft_putptr(unsigned long long n, int on);
int	print(const char *s, int *i, va_list arg_n);
int	ft_printf(const char *s, ...);

#endif
