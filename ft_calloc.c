/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:52:28 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/13 20:30:15 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*buf;

	buf = (char *)malloc(number * size);
	if (!buf)
		return (NULL);
	ft_bzero(buf, number * size);
	return ((void *)buf);
}

/* int	main(void)
{
	size_t	count;
	size_t	size;

	count = 5;
	size = 3;
	printf("%s\na", (char *)ft_calloc(count, size));
	return (0);
} */