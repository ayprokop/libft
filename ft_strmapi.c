/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:03:51 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/13 20:36:39 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(*str) * (ft_strlen(s) + 1));
	if (!s || !str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char my_func(unsigned int i, char str)
// {
// 	printf("str[%d]: %c\n", i, str);
// 	return str - 32;
// }

// int main()
// {
// 	char str[10] = "hello.";
// 	printf("%s\n", str);
// 	printf("The result is %s\n", ft_strmapi(str, my_func));
//  	return 0;
//  }