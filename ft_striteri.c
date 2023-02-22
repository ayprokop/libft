/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:54:00 by ayprokop          #+#    #+#             */
/*   Updated: 2023/02/17 10:36:58 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Params
// s: The string on which to iterate.
// f: The function to apply to each character.
// Desc
// Applies the function ’f’ on each character of the string passed as argument,
//  passing its index as first argument. Each character is passed by address to
//   ’f’ to be modified if necessary.

// keyword "return": you can use return without a value to stop the 
// execution of a function.

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
