/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:31:49 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/13 20:27:53 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	if (dst > src)
	{
		while (len)
		{
			len--;
			*((unsigned char *)dst + len) = *((unsigned char *)src + len);
		}
	}
	else
	{
		while (len)
		{
			len--;
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	return (dst);
}

// int main(void)
// {
// 	char dst[100] = "Goodbye";
// 	const char src[] = "Hello";
// 	ft_memmove(dst+3, src, 5);
// 	printf("%s\n", dst);
// 	return (0);
// }