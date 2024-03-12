/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:39:32 by ayprokop          #+#    #+#             */
/*   Updated: 2024/03/12 17:36:41 by ayprokop         ###   ########.fr       */
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
	else if (type == 'x' || type == 'X')
		count += ft_printf_hex(va_arg(*ap, unsigned int), type);
	else if (type == 'p')
		count += ft_printf_addr(va_arg(*ap, unsigned long));
	return (count);
}

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
		count += ft_printf_capitalhex(va_arg(*ap, unsigned int));
	else if (type == 'p')
		count += ft_printf_addr(va_arg(*ap, unsigned long long));
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

// int	main(void)
// {
// 	int	x = 100000;
// 	int i = printf();
// 	int j = ft_printf(" %x \n", 0);
// 	printf("%d\n", i);
// 	printf("%d\n", j);
// 	return (0);
// }