/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:48:23 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/20 10:14:22 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// bzero() writes "n" zeroed bytes to the string "s". If "n"
// is zero, bzero does nothing.

// unsigned char is a character datatype where
// the variable consumes all the 8 bits of the
// memory and there is no sign bit (which is there in signed char).
// So it means that the range of unsigned char data ranges from 0
// to 255.
// cf. extended ascii

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n);

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
