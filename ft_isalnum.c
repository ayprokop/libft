/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:48:08 by ayprokop          #+#    #+#             */
/*   Updated: 2023/11/20 13:21:05 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns truth value
int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == 1) || (ft_isdigit(c) == 1))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	// printf("%d\n", isalnum(97));
// 	// printf("%d\n", isalnum('8'));
// 	// printf("%d\n", isalnum(0));

// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", ft_isalnum('0'));
// 	printf("%d\n", ft_isalnum(0));
// 	return (0);
// }