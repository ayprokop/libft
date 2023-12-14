/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:36:02 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/14 15:13:24 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(long long num)
{
	int	nlen;

	nlen = 0;
	if (num == 0)
		return (1);
	else if (num < 0)
	{
		num *= -1;
		nlen++;
	}
	while (num > 0)
	{
		num /= 10;
		nlen++;
	}
	return (nlen);
}

char	*ft_itoa(int n)
{
	char		*nbr;
	long long	num;
	int			len_nbr;

	num = n;
	len_nbr = ft_nlen(num);
	nbr = (char *)malloc(sizeof(*nbr) * (len_nbr + 1));
	if (!nbr)
		return (NULL);
	nbr[len_nbr--] = '\0';
	if (num == 0)
	{
		nbr[0] = '0';
	}
	else if (num < 0)
	{
		num *= -1;
		nbr[0] = '-';
	}
	while (num > 0)
	{
		nbr[len_nbr--] = '0' + (num % 10);
		num /= 10;
	}
	return (nbr);
}

// static size_t	get_digits(int n)
// {
// 	size_t	i;

// 	i = 1;
// 	while (n /= 10)
// 		i++;
// 	return (i);
// }

// char	*ft_itoa(int n)
// {
// 	char	*str_num;
// 	size_t	digits;
// 	long long	num;

// 	num = n;
// 	digits = get_digits(n);
// 	if (n < 0)
// 	{
// 		num *= -1;
// 		digits++;
// 	}
// 	str_num = (char *)malloc(sizeof(char) * (digits + 1));
// 	if (!str_num)
// 		return (NULL);
// 	*(str_num + digits) = 0;
// 	while (digits--)
// 	{
// 		*(str_num + digits) = num % 10;
// 		num = num / 10;
// 	}
// 	if (n < 0)
// 		*(str_num + 0) = '0';
// 	return (str_num);
// }

// int	main(void)
// {
// 	// ft_itoa(2147483647);
// 	printf("%s\n", ft_itoa(-2147483648));
// 	return (0);
// }