/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addrtohex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:08:16 by ayprokop          #+#    #+#             */
/*   Updated: 2024/01/27 12:25:27 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_addrtohex(unsigned long long n, unsigned long long int base, char str[])
{
	char				*digit;
	unsigned long long	digit_index;
	int					i;

	digit = "0123456789abcdef";
	i = 0;
	while (n > 0)
	{
		digit_index = n % base;
		str[i] = digit[digit_index];
		n = n / base;
		i++;
	}
	str[i] = 'x';
	i++;
	str[i] = '0';
	i++;
	str[i] = '\0';
	ft_strreverse(str, i);
	return (i);
}
