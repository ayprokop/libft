/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:29:17 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/13 20:32:07 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char		*copy;
	size_t		i;

	copy = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/* int main(void)
{
	const char str[] = "Good morning";
	char *p;
	p = ft_strdup(str);
	
	printf("%s\n", p);
	return (0);
} */