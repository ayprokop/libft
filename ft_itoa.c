/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:53:00 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/17 10:25:40 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The function allocates (with malloc(3)) and returns a string representing 
// the integer received as an argument. Negative numbers must be handled.
// Use malloc
// n: the integer to convert
// Return value: The string representing the integer. NULL if the allocation
// fails.

#include "libft.h"

static int	ft_nlen(long num)
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
	char	*nbr;
	long	num;
	int		len_nbr;

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

/* int	main(void)
{
	int	n;
	// ft_itoa(2147483647);
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
} */