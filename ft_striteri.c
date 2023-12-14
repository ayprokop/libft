/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:38:25 by ayprokop          #+#    #+#             */
/*   Updated: 2023/12/14 08:41:25 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void my_func(unsigned int i, char *str)
// {
// 	printf("str[%d]: %s\n", i, str);
// }

// int main()
// {
// 	char str[10] = "Hello.";
	
// 	ft_striteri(str, my_func);
// 	return 0;
// }