/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:31:23 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/13 20:29:55 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (*((unsigned char *)b + i) == (unsigned char)c)
			return ((void *)b + i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char b[] = "Gd\0 morning";
// 	char	c = 'o';
// 	char *p;
// 	p = (char *)ft_memchr(b, c, 6);
// 	printf("%s\n", p);
// 	return (0);
// }