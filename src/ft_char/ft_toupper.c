/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:24:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:24:16 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_char.h"

/*
** Recoded toupper libc function: Converts a lower-case letter to the
** corresponding upper-case letter
**
** c: A character
**
** returns: The corresponding upper-case letter
**          Otherwise the argument is returned unchanged
*/

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
