/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:06:30 by ayprokop          #+#    #+#             */
/*   Updated: 2024/03/14 07:54:42 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned int n)
{
	char	*str;
	int		count;

	str = ft_hextoa(n);
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (count);
}

// int  main(void)
// {
// 	int	x = 0;
// 	int y = 0;
// 	x = printf("%x\n", -1234);
// 	y = ft_printf_hex(-1234);
// 	printf("\nx: %d\ny: %d\n", x, y);
// }

// #include <unistd.h>

// int	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

// int	ft_len_of_hex(unsigned int n)
// {
// 	int	len;

// 	len = 0;
// 	while (len != 0)
// 	{
// 		len++;
// 		n = n % 16;
// 	}
// 	return (len);
// }

// void	ft_put_hex(unsigned int n, const char type)
// {
// 	if (n >= 16)
// 	{
// 		ft_put_hex(n / 16, type);
// 		ft_put_hex(n % 16, type);
// 	}
// 	else
// 	{
// 		if (n <= 9)
// 			ft_putchar_fd((n + 48), 1);
// 		else
// 		{
// 			if (type == 'x')
// 				ft_putchar_fd((n - 10 + 'a'), 1);
// 			if (type == 'X')
// 				ft_putchar_fd((n - 10 + 'A'), 1);
// 		}
		
// 	}
	
// }

// int	ft_printf_hex(unsigned int n, const char type)
// {
// 	int count;
	
// 	count = ft_len_of_hex(n);
// 	if (n == 0)
// 		write(1, "0", 1);
// 	else
// 		ft_put_hex(n, type);
// 	return (count);
// }
