/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:22:39 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/21 14:03:15 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
// The strnstr() function locates the first occurrence of the null-
// terminated string needle in the string haystack, where not more than len
// characters are searched.  Characters that appear after a ‘\0’ character
// are not searched.  Since the strnstr() function is a FreeBSD specific
// API, it should only be used when portability is not a concern.
// RETURN VALUES
// If needle is an empty string (""), haystack is returned; if needle occurs
// nowhere in haystack, NULL is returned; otherwise a pointer to [the first
// character of the first occurrence of needle] is returned.

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	if (!(*s2))
		return ((char *)s1);
	i = 0;
	while (i < len && s1[i] != '\0')
	{
		j = 0;
		while (s1[i + j] == s2[j] && s1[j] != '\0' && i + j < len)
			j++;
		if (s2[j] == '\0')
			return ((char *)(s1 + i));
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char	*haystack = "abfcfde";
	const char	*needle = "ff";
	printf("%s\n", ft_strnstr(haystack, needle, 20));
	return (0);
} */