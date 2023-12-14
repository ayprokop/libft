/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:19:45 by ayprokop          #+#    #+#             */
/*   Updated: 2023/11/20 14:14:34 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//truth value
int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", isprint('a'));
// 	printf("%d\n", isprint(2));
// 	printf("%d\n", isprint(126));

// 	printf("%d\n", ft_isprint('a'));
// 	printf("%d\n", ft_isprint(2));
// 	printf("%d\n", ft_isprint(126));

// 	return (0);
// }