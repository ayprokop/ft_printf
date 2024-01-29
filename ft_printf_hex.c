/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:06:30 by ayprokop          #+#    #+#             */
/*   Updated: 2024/01/27 12:24:32 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned long n)
{
	char	hex[(int) sizeof (unsigned long)];
	int		count;

	count = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	count += ft_basetobase(n, 16, hex);
	ft_putstr_fd(hex, 1);
	return (count);
}
