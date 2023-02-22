/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:54:17 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/17 10:27:59 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Params
// _ s: the string on which to iterate.
// _ f: the function to apply to each character.
// Return  value
// _ the string created from the successive applications of 'f'
// _ returns NULL if the allocation fails.
// Ex: malloc
// Description
// applies the function 'f' to each character of the string 's', and passing
// its index as first argument to create a new string (with malloc) resulting 
// from successive applications of 'f'.

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(str) * (strlen(s) + 1));
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

/* int	main(void)
{
	char const	*s = "look on the bright side";
	void	(*f)(unsigned int, char) = NULL;

	ft_strmapi(s, f);
	return (0);
} */