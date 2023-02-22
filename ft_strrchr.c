/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:20:55 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/21 13:24:01 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
// The strchr() function locates the first occurrence of c (converted to a
// char) in the string pointed to by s.  The terminating null character is
// considered to be part of the string; therefore if c is ‘\0’, the
// functions locate the terminating ‘\0’.
// The strrchr() function is identical to strchr(), except it locates the
// last occurrence of c.
// RETURN VALUES
// The functions strchr() and strrchr() return a pointer to the located
// character, or NULL if the character does not appear in the string.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if ((char)c == '\0')
		return ((char *)(s + ft_strlen(s)));
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/* int	main(void)
{
	const char *s = "Hellllllllo";

	printf("%s\n", ft_strrchr(s, 0));
	return (0);
} */