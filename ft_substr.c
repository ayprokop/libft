/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:35:21 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/13 20:31:41 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// start と finish は添字
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	finish;
	size_t			len_s;

	if (!s)
		return (0);
	len_s = ft_strlen(s);
	finish = 0;
	if (start < len_s)
		finish = len_s - start;
	if (finish > len)
		finish = len;
	substr = (char *)malloc(sizeof(char) * (finish + 1));
	if (!substr)
		return (0);
	ft_strlcpy(substr, s + start, finish + 1);
	return (substr);
}

// int main(void)
// {
// 	char const s[] = "If you know TIME as well as I do,"; /* slen=33 */
// 	printf("%s\n", ft_substr(s, 12, 4));
// 	return (0);
// }