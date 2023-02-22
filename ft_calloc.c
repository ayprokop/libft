/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:21:17 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/21 15:20:16 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The calloc() function contiguously allocates enough space for 
// "count" objects that are "size" bytes of memory each and returns 
// a pointer to the allocated memory.
// The allocated memory is filled with bytes of value zero.
// RETURN VALUES
// If successful, calloc(), malloc(), realloc(), reallocf(), valloc(), and
// aligned_alloc() functions return a pointer to allocated memory. If there
// is an error, they return a NULL pointer and set errno to ENOMEM.

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*buffer;
	int		area;

	buffer = (char *)malloc(count * size);
	if (!buffer)
		return (NULL);
	area = count * size;
	while (area >= 0)
	{
		buffer[area] = '\0';
		area--;
	}
	return ((void *)buffer);
}

/* int	main(void)
{
	size_t	count;
	size_t	size;

	count = 5;
	size = 3;
	printf("%s\na", ft_calloc(5, 3));
	return (0);
} */