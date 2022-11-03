/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:42:41 by alenzini          #+#    #+#             */
/*   Updated: 2022/10/15 11:58:03 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*crea (malloc) e restituisce un array di stringhe ottenure dividendo la stringa
(s) usando come il carattere (c) come limite della substringa. l'array termina
con un puntatore NULL*/

static void	ft_allocate(char **tab, char const *s, char sep)
{
	char		**tab_p;
	char const	*tmp;

	tmp = s;
	tab_p = tab;
	while (*tmp)
	{
		while (*s == sep)
			++s;
		tmp = s;
		while (*tmp && *tmp != sep)
			++tmp;
		if (*tmp == sep || tmp > s)
		{
			*tab_p = ft_substr(s, 0, tmp - s);
			s = tmp;
			++tab_p;
		}
	}
	*tab_p = NULL;
}

static int	ft_count_words(char const *s, char sep)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++word_count;
		while (*s && *s != sep)
			++s;
	}
	return (word_count);
}

char	**ft_split(const char *str, char c)
{
	char	**new;
	int		size;

	if (!str)
		return (NULL);
	size = ft_count_words(str, c);
	new = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	ft_allocate(new, str, c);
	return (new);
}
