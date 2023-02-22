/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:53:25 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/17 12:00:18 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s: The string to output.
// fd: The file descriptor on which to write.

// Outputs the string ’s’ to the given file descriptor followed 
// by a newline.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
