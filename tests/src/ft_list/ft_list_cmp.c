/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_cmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2021/01/16 18:33:10 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

/*
** Returns 0 if list is equal to reference
*/

int		ft_list_cmp(t_node *test_lst, char **ref)
{
	int	i;

	if (!test_lst || !ref)
		return (1);
	i = 0;
	while (test_lst && ref[i])
	{
		if (test_lst->content != ref[i])
			return (1);
		test_lst = test_lst->next;
		i++;
	}
	return (0);
}
