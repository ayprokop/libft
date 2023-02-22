/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 08:11:11 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/20 11:57:08 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
// The strlcpy() and strlcat() functions copy and concatenate strings
// with the same input parameters and output result as snprintf(3).
// They are designed to be safer, more consistent, and less error prone 
// replacements for the easily misused functions strncpy(3) and strncat(3).
// strlcpy() and strlcat() take the full size of the destination buffer and
//  guarantee NUL-termination if there is room.
// Note that room for the NUL should be included in dstsize.
// strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
// NUL-terminating the result if dstsize is not 0.
// strlcat() appends string src to the end of dst.  
// It will append at most dstsize - strlen(dst) - 1 characters.
// It will then NUL-terminate, unless dstsize is 0 or the original dst string
// was longer than dstsize (in practice this should not happen as it means
// that either dstsize is incorrect or that dst is not a proper string).
// If the src and dst strings overlap, the behavior is undefined.

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}
