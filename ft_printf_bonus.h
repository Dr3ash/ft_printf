/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:57:50 by alenzini          #+#    #+#             */
/*   Updated: 2022/11/02 18:15:06 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

/* flag corresponding to a prime number
- : 2
0 : 3
# : 5
+ : 7
  : 11
*/

typedef struct s_spec
{
	int	flag;
	int	width;
	int	precis;
}	t_spec;

int	ft_printf(const char *s, ...);

/* print */
int	launch_print(const char *s, int *i, va_list arg_n);
int	print_c(int c, t_spec spec);
int	print_d(int n, t_spec spec);
int	print_p(unsigned long long n, t_spec spec);
int	print_s(char *s, t_spec spec);
int	print_u(unsigned int c, t_spec spec);
int	print_x(unsigned int n, t_spec spec, int upper);

/* flag */
int	plus_space(int flag);
int	hashtag(int upper);

/* get */
int	get_flag(const char *s, int *i);
int	get_width(const char *s, int *i, int *flag);
int	get_precis(const char *s, int *i);
int	*get_instruction(int n, ...);

/* width */
int	width_nbr(t_spec spec, long long int *n, int nbr_len);
int	width_unsigned(t_spec spec, int nbr_len);
int	width_hex(t_spec spec, unsigned int n, int upper);
int	print_width(int width, int len, char c);

/* utils */
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(long long int n);
int	print_nbr(long long int *n, t_spec spec);
int	print_unsigned(unsigned int n, t_spec spec);
int	print_precis_nbr(int precis, int len);
int	print_nbr_len(long long int n, t_spec spec, int base);

#endif