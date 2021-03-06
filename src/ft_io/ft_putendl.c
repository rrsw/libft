/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:21:39 by mboivin           #+#    #+#             */
/*   Updated: 2021/07/11 15:35:16 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"
#include "libft_io.h"

/*
** This function outputs the string s to the standard output, followed by a
** newline
**
** s: The string to output
*/

void	ft_putendl(const char *s)
{
	if (s)
	{
		write(STDOUT_FILENO, s, ft_strlen(s));
		write(STDOUT_FILENO, "\n", 1);
	}
}
