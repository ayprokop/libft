/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:52:24 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/22 11:59:33 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Description
// The function allocates (with malloc) and returns a substring from the 
// string "s". The substring begins at index "start" and is of maximum 
// size "len".
//Parameters
// s: The string from which to create the substring. 
// start: The start index of the substring in the string ’s’.
// len: The maximum length of the substring.
//Return value
// The substring. (subs)
// NULL if the allocation fails.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	subs = (char *)malloc(sizeof(*subs) * (len + 1));
	if (subs == NULL || s == NULL)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		start = 0;
		len = 0;
	}
	i = 0;
	while (i < len)
	{
		subs[i] = s[start];
		i++;
		start++;
	}
	subs[i] = '\0';
	return (subs);
}

/* int	main(void)
{
	char const	*s = "wolfsburg";
	unsigned int	start;
	size_t	len;

	start = 10;
	len = 0;
	printf("%s\n", ft_substr(s, 10, 9));
	return (0);
} */