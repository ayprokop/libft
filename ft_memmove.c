/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 08:07:50 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/21 12:37:59 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void * memmove(void *dest, const void *src, size_t len);
// memmove() copies "len" bytes from string "src" to string
// "dst". The two strings may overlap; the copy is always done
// in a non-destructive manner.
// RETURN VALUES
//      The memmove() function returns the original value of dst.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	if (dest > src)
	{
		while (len--)
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	}
	else
	{
		while (len--)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/* int	main(void)
{
	char	src[20] = "hello world";
	char	dest[20];
	size_t	len;
	len = 21;
	printf("%s\n", ft_memmove(dest, src, 21));
	return 0;
} */