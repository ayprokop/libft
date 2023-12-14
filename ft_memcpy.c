/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:31:33 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/13 09:31:37 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	enum {n = 3};
// 	int	dst[n];
// 	const int src[] = {190, 280, 370, 460, 550};
// 	ft_memcpy(dst, src, sizeof(dst));
// 	int i;
// 	i = 0;
// 	while (i < n)
// 	{
// 		printf("%d ", dst[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }