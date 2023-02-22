/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:37:30 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/20 10:16:23 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//      The memcmp() function compares byte string s1 against byte string s2.
//      Both strings are assumed to be n bytes long.

// RETURN VALUES
//      The memcmp() function returns zero if the two strings are identical,
//      otherwise returns the difference between the first two differing bytes
//      (treated as unsigned char values, so that ‘\200’ is greater than ‘\0’,
//      for example).  Zero-length strings are always identical.  This behavior
//      is not required by C and portable code should only depend on the sign of
//      the returned value.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
