/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:37:21 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/16 20:01:15 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
** This function outputs the string s to the standard output.
*/

void	ft_putstr(char const *s)
{
	if (s)
		ft_putstr_fd(s, 1);
}
