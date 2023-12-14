/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:13:10 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/13 13:37:11 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;
	int		j;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	j = (ft_strlen(s1) - 1);
	while (s1[i] != '\0' && ft_strchr(set, s1[j]))
		j--;
	trimmed = ft_substr(s1, i, ((j - i) + 1));
	return (trimmed);
}

/* int	main(void)
{
	char const	*s1 = "wolfsburg";
	char const	*set;
	
	set = "uwlw";
	printf("%s", ft_strtrim(s1, set));
	return (0);
} */