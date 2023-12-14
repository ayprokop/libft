/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:32:29 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/13 09:32:30 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (dstsize == 0 || dstsize <= i)
		return (ft_strlen(src) + dstsize);
	while (src[j] && i + j < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

// int	main(void)
// {
// 	char dst[] = "Hello";
// 	const char src[] = ", Goodbye";
// 	printf("%lu\n", ft_strlcat(dst, src, 4));
// 	printf("%s\n", dst);

// 	return (0);
// }