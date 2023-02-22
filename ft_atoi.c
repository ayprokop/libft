/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:34:25 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/21 14:48:06 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
// The atoi() function converts the initial portion of the string
// pointed to by str to int representation.

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while ((*str == '\f') || (*str == '\n') || (*str == '\r')
		|| (*str == '\t') || (*str == '\v') || (*str == ' '))
	{
		str++;
	}
	if ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		result *= 10;
		result += (*str - 48);
		str++;
	}
	return (result * sign);
}

/* int	main(void)
{
	char	*s = "--85";
	printf("%d\n", ft_atoi(s));
	// char	*t = "   ---+--+-123    4ab567";
	// printf("%d\n", ft_atoi(t));
	return (0);
} */