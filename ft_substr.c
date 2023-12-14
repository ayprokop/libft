/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:35:21 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/14 12:43:58 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// start と finish は添字
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			len_s;
	unsigned int	i;

	if (!s)
		return (0);
	len_s = ft_strlen(s);
	if (!len || start >= len_s)
		substr = (char *)malloc(sizeof(char) * 1);
	else if (len > len_s - start)
		substr = (char *)malloc(sizeof(char) * (len_s - start + 1));
	else
		substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	i = 0;
	while (i < len && start < len_s)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	char const	*s = "wolfsburg";
// 	printf("%s\n", ft_substr(s, 0, 10));
// 	return (0);
// }