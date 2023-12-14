/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:36:02 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/14 15:06:04 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digits(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str_num;
	size_t	digits;
	long long	num;

	num = n;
	digits = get_digits(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	str_num = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str_num)
		return (NULL);
	*(str_num + digits) = 0;
	while (digits--)
	{
		*(str_num + digits) = num % 10;
		num = num / 10;
	}
	if (n < 0)
		*(str_num + 0) = '0';
	return (str_num);
}

// int	main(void)
// {
// 	// ft_itoa(2147483647);
// 	printf("%s\n", ft_itoa(-2147483648));
// 	return (0);
// }