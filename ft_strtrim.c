/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:54:23 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/21 12:02:07 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description
// The function allocates (with malloc) and returns a copy of ’s1’ 
// with the characters specified in ’set’ removed from the beginning and
// the end of the string.
// s1: The string to be trimmed.
// set: The reference set of characters to trim.
// Return value: The trimmed string.
// NULL if the allocation fails.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)malloc(sizeof(*str) * (ft_strlen(s1) - 1));
	if (!str)
		return (0);
	i = 0;
	j = (ft_strlen(s1) - 1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (s1[i] != '\0' && ft_strchr(set, s1[j]))
	str = ft_substr(s1, i, ((j - i) + 1));
	return (str);
}

int	main(void)
{
	char const *s1 = "wolfsburg";
	char const *set = "w g";
	printf("%s", ft_strtrim(s1, set));
	return (0);
}