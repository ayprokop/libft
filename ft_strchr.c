/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:46:40 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/09 11:46:42 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	const char s[] = "Hello";
// 	char c = 'l';
// 	printf("%s\n", strchr(s, c));
// 	printf("%s\n", ft_strchr(s, c));
// 	return (0);
// }