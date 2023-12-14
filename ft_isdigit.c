/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:48:08 by ayprokop          #+#    #+#             */
/*   Updated: 2023/11/20 13:18:29 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns truth value
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", isdigit(97));
// 	printf("%d\n", isdigit('0'));

// 	printf("%d\n", ft_isdigit('0'));
// 	printf("%d\n", ft_isdigit(51));
// 	return (0);
// }