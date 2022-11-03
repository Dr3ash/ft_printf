/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alenzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:26:55 by alenzini          #+#    #+#             */
/*   Updated: 2022/10/15 12:19:26 by alenzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*prende come parametro un nodo e ne libera la memoria di content unsando una
funzione (del) passata come parametro e libera il nodo.
la memoria di next non deve essere liberata*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL)
	{
		if (lst != NULL && (*del) != NULL)
		{
			(*del)(lst->content);
			free(lst);
		}
	}
}
