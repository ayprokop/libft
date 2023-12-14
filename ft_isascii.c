/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:48:08 by ayprokop          #+#    #+#             */
/*   Updated: 2023/11/20 12:18:39 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns truth value
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {

// 	printf("%d\n", isascii(97));
// 	printf("%d\n", isascii('\0'));
// 	printf("%d\n", isascii(200));

// 	printf("%d\n", ft_isascii('a'));
// 	printf("%d\n", ft_isascii('\0'));
// 	printf("%d\n", ft_isascii(200));

// 	return (0);
// }