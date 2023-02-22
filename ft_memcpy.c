/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 08:04:45 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/21 13:04:31 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memcpy() copies "n" bytes from memory area "src" to memory
// area "dest" and "src" might overlap should use memmove(3)
// instead.
// RETURN VALUES
//      The memcpy() function returns the original value of dst.
//"restrict" is a keyword that can be used in pointer declarations.
//By adding this type qualifier, a programmer hints to the compiler
//that for the lifetime of the pointer, no other pointer will be used
//to access the object to which it points.

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/* int	main(void)
{
	char	src[20] = "hello world";
	char	dest[20];
	size_t	n;
	printf("%s\n", ft_memmove(dest, src, 21));
	return (0);
} */