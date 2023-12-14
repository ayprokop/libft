/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:37:29 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/14 12:52:34 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// the number of words in string "s"
static int	ft_num_wrds(char const *s, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			num++;
		while (s[i] != c && s[i])
			i++;
	}
	return (num);
}

// the length of each word in string "s"
static int	ft_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

// if (!s || !c || !array)
//wrds: words copied . wlen: length_to_copy
char	**ft_split(char const *s, char c)
{
	char	**array;
	int		wrds;
	int		wlen;
	int		len_copied;

	wrds = 0;
	wlen = 0;
	array = (char **)malloc(sizeof(char *) * (ft_num_wrds(s, c) + 1));
	if (!s || !array)
		return (NULL);
	while (ft_num_wrds(s, c) > wrds)
	{
		len_copied = 0;
		array[wrds] = (char *)malloc(sizeof(char) * (ft_len(&s[wlen], c) + 1));
		if (!(array[wrds]))
			return (NULL);
		while (s[wlen] == c)
			wlen++;
		while (s[wlen] != c && s[wlen])
			array[wrds][len_copied++] = s[wlen++];
		array[wrds][len_copied] = '\0';
		wrds++;
	}
	array[wrds] = 0;
	return (array);
}

// int	main(void)
// {
// 	char	*ptr;
// 	char	**new;

// 	ptr = "this*is**my***string";
// 	// ptr = "a/apple/arm/basket/bread/car/camp/element/...";
// 	new = (ft_split(ptr, '*'));
// 	// new = (ft_split(ptr, '/'));
// 	printf("%s\n%s\n%s\n%s\n" , new[0], new[1], new[2], new[3]);	
// 	return (0);
// }