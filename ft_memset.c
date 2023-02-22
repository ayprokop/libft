/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:35:28 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/20 10:18:15 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memset() writes "len" bytes of value "c" (converted
// to an unsigned char) to the string "b".

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
