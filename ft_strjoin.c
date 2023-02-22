/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:54:10 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/20 10:20:40 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// description
// The function allocates (with malloc) and returns a new string, which is the
// result of the concatenation of "s1" and "s2".
// s1: The prefix string.
// s2: The suffix string.
// Return value: The new string.
// NULL if the allocation fails.

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = (char *)malloc(sizeof(*str) * (i + j + 1));
	if (!str)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
