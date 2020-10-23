/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:22:44 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:56:10 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_recon.h"

/*
** Recoded isspace libc function: Checks if c is a space character
**
** c: A character
**
** returns: A non-zero integer if c is a space character
**          0 otherwise
*/

bool	ft_isspace(int c)
{
	return ((c == ' ') || (c == '\f') || (c == '\t') \
		|| (c == '\v') || (c == '\n') || (c == '\r'));
}
