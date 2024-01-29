/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_capitalhex.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:07:22 by ayprokop          #+#    #+#             */
/*   Updated: 2024/01/27 12:25:10 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_capitalhex(unsigned long n)
{
	char	hex[(int) sizeof (unsigned long)];
	int		count;
	int		i;

	count = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	count += ft_basetobase(n, 16, hex);
	i = 0;
	while (hex[i])
	{
		hex[i] = ft_toupper(hex[i]);
		i++;
	}
	ft_putstr_fd(hex, 1);
	return (count);
}
