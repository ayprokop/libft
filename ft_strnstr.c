/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:33:46 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/13 09:33:48 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!(*little))
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0'
			&& big[i + j] != '\0' && i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char big[] = "Good morning";
// 	const char little[] = " morn";
// 	printf("%s\n", ft_strnstr(big, little, 14));
// 	return (0);
// }