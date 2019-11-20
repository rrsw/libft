/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:38:18 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 19:40:37 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Returns the last element of the list
**
** lst: The beginning of the list
**
** returns: The last element of the list
*/

t_list		*ft_lstlast(t_list *lst)
{
	t_list	*cursor;

	cursor = lst;
	if (!lst)
		return (NULL);
	while (cursor->next)
		cursor = cursor->next;
	return (cursor);
}