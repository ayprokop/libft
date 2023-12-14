/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:48:08 by ayprokop          #+#    #+#             */
/*   Updated: 2023/11/20 12:18:02 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns truth value
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int	main(void)
// {

// 	printf("%d\n", isalpha('a'));
// 	printf("%d\n", isalpha('\0'));

// 	printf("%d\n", ft_isalpha('Z'));
// 	printf("%d\n", ft_isalpha('?'));

// 	return (0);
// }