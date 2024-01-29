/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basetobase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:58:35 by ayprokop          #+#    #+#             */
/*   Updated: 2024/01/27 12:07:32 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_basetobase(unsigned long n, unsigned long base, char str[])
{
	char			*digit;
	unsigned int	digit_index;
	int				i;
	int				count;

	digit = "0123456789abcdef";
	i = 0;
	count = 0;
	while (n > 0)
	{
		digit_index = n % base;
		str[i] = digit[digit_index];
		n = n / base;
		i++;
		count++;
	}
	str[i] = '\0';
	ft_strreverse(str, i);
	return (count);
}
