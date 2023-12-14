/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:31:11 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/13 09:31:14 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)0;
		i++;
	}
}

// int	main(void)
// {
// 	enum {n = 7};
// 	int	b[n] = {1,1,1,1,1,1,1};
// 	ft_bzero(b + 2, 5);
// 	int i;

// 	i = 0;
// 	while (b[i])
// 	{
// 		printf("%d ", b[i]);
// 		i++;
// 	}
// 	puts("");
// 	return (0);
// }