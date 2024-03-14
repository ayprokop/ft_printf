/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:39:32 by ayprokop          #+#    #+#             */
/*   Updated: 2024/03/14 08:09:38 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_getarg(va_list *ap, const char type)
{
	int	count;

	count = 0;
	if (type == '%')
		count += ft_printf_char('%');
	else if (type == 'c')
		count += ft_printf_char(va_arg(*ap, int));
	else if (type == 's')
		count += ft_printf_str(va_arg(*ap, char *));
	else if (type == 'd' || type == 'i')
		count += ft_printf_deci(va_arg(*ap, int));
	else if (type == 'u')
		count += ft_printf_unsigned(va_arg(*ap, unsigned int));
	else if (type == 'x')
		count += ft_printf_hex(va_arg(*ap, unsigned int));
	else if (type == 'X')
		count += ft_printf_hexcapital(va_arg(*ap, unsigned int));
	else if (type == 'p')
		count += ft_printf_addr(va_arg(*ap, unsigned long));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_getarg(&ap, format[i]);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
			i++;
		}
	}
	va_end(ap);
	return (count);
}

// int  main(void)
// {
// 	int	x = 0;
// 	int y = 0;
// 	x = printf("%x\n", -1234);
// 	y = ft_printf("%x\n", -1234);
// 	printf("%d\n%d\n", x, y);
// }



// int main() {
//     int printedChars;
//     int printedChars2;

//     printedChars = ft_printf("This is a simple %s test with %d format %c hexidecimals %x and unsigned %u, normal unsigned %u\n", "ft_printf", 123, '!', 462, -1, 20);
//     printedChars2 = printf("This is a simple %s test with %d format %c hexidecimals %x and unsigned %u, normal unsigned %u\n", "ft_printf", 123, '!', 462, -1, 20);
//     ft_printf("Number of characters printed ft_printf: %d\n", printedChars);
//     printf("Number of characters printed ft_printf: %d\n", printedChars);
//     ft_printf("Number of characters printedin printf: %d\n", printedChars2);
//     printf("Number of characters printedin printf: %d\n", printedChars2);

//     ft_printf("ft_printf string :%s", "sassss\n");
//     printf("printf string :%s", "sassss\n");
//     ft_printf("ft_printf character :%c\n",'s');
//     printf("printf character :%c\n",'s');
//     ft_printf("ft_printf digit positive :%d\n",100);
//     printf("printf digit positive :%d\n",100);
//     ft_printf("ft_printf digit negative :%d\n",-100);
//     printf("printf digit negative :%d\n",-100);
//     ft_printf("ft_printf integer positive :%i\n",100);
//     printf("printf integer positive :%i\n",100);
//     ft_printf("ft_printf integer negative :%i\n",-100);
//     printf("printf integer negative :%i\n",-100);
//     ft_printf("ft_printf unsigned integer with positive :%u\n",100);
//     printf("printf unsigned integer with positive :%u\n",100);
//     ft_printf("ft_printf unsigned integer with negative :%u\n",-1);
//     printf("printf unsigned integer with negative :%u\n",-1);
//     ft_printf("ft_printf hexidesimal small and positeve :%x\n",462);
//     printf("printf hexidesimal small and positeve :%x\n",462);
//     ft_printf("ft_printf hexidesimal small and negative :%x\n",-462);
//     printf("printf hexidesimal small and negative :%x\n",-462);
//     ft_printf("ft_printf hexidecimals big and positive :%X\n",462);
//     printf("printf hexidecimals big and positive :%X\n",462);
//     ft_printf("ft_printf hexidecimals big and negative :%X\n",-462);
//     printf("printf hexidecimals big and negative :%X\n",-462);
//     ft_printf("ft_printf procent :%%\n");
//     printf("printf procent :%%\n");
//     ft_printf("ft_printf string without flags\n");
//     printf("printf string without flags\n");

//     return 0;
// }
