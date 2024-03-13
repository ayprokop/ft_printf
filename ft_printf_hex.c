/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:06:30 by ayprokop          #+#    #+#             */
/*   Updated: 2024/03/13 15:16:46 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include <unistd.h>

// int	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

int	ft_len_of_hex(unsigned int n)
{
	int	len;

	len = 0;
	while (len != 0)
	{
		len++;
		n = n % 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int n, const char type)
{
	if (n >= 16)
	{
		ft_put_hex(n / 16, type);
		ft_put_hex(n % 16, type);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + 48), 1);
		else
		{
			if (type == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			if (type == 'X')
				ft_putchar_fd((n - 10 + 'A'), 1);
		}
		
	}
	
}

int	ft_printf_hex(unsigned int n, const char type)
{

	if (n == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(n, type);
	return (ft_len_of_hex(n));
}

// int	main(void)
// {
//     ft_print_hex(-462, 'x');
//     printf("\nprintf hexidesimal small and negative :%x\n",-462);
// 	return (0);
// }
