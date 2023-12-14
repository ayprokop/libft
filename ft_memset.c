/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:31:57 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/13 20:31:26 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	enum {n = 5};
// 	char str[n] = "Hello";
// 	int	c = 0; 
// 	ft_memset(str + 2, c, 2);
// 	int i;
// 	i = 0;
// 	while (i < n)
// 	{
// 		printf("%c\n", str[i]);
// 		i++;
// 	}
// 	return (0);
// }