/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_addr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:08:37 by ayprokop          #+#    #+#             */
/*   Updated: 2024/01/27 12:25:36 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_addr(unsigned long long n)
{
	char	addr[(int) sizeof (unsigned long long)];
	int		count;
	int		base;

	count = 0;
	if (n == 0)
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	base = 16;
	count += ft_addrtohex(n, base, addr);
	ft_putstr_fd(addr, 1);
	return (count);
}
