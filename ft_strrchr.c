/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:33:55 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/13 20:26:52 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	const char	*s = "Hello";
	char c = 'l';
	printf("%s\n", strrchr(s, c));
	printf("%s\n", ft_strrchr(s, c));
	return (0);
}
 */