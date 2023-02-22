/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:06:00 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/21 13:38:38 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
// The strcmp() and strncmp() functions lexicographically compare the null-
// terminated strings s1 and s2.
// The strncmp() function compares not more than n characters.  Because
// strncmp() is designed for comparing strings rather than binary data,
// characters that appear after a `\0' character are not compared.
// RETURN VALUES
// The strcmp() and strncmp() functions return an integer greater than,
// equal to, or less than 0, according as the string s1 is greater than,
// equal to, or less than the string s2.  The comparison is done using
// unsigned characters, so that `\200' is greater than `\0'.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	str1[] = "\200";
	char	str2[] = "\0";
	size_t	n;

	n = 7;
	printf("%s\n%s\n", str1, str2);
	ft_strncmp(str1, str2, n);
	printf("%d\n", ft_strncmp(str1, str2, n));
	return (0);
} */