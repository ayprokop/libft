/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:53:07 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/17 11:47:09 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Param
// c: The character to output.
// fd: The file descriptor on which to write.
// Desc
// Outputs the character ’c’ to the given file descriptor.
// write()

// File descriptor is an integer in your application that 
// refers to the file description in the kernel.

// File description is the structure in the kernel that 
// maintains the state of an open file (its current position, 
// blocking/non-blocking, etc.). In Linux file descripion is
// struct file.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
