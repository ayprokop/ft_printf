/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:39:32 by ayprokop          #+#    #+#             */
/*   Updated: 2024/01/18 15:31:55 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include "libft.h"
#include <stdarg.h>
// cspdiuxX%

int	ft_printf_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_printf_str(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_printf_deci(int n)
{
	char	*str;

	str = ft_itoa(n);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_printf_unsigned(unsigned int n)
{
	char	*str;

	str = ft_itoa((unsigned int)n);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_printf_hex(unsigned long long)
{
	
}


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
		count += 0;
	else if (type == 'X')
		count += 0;
	else if (type == 'p')
		count += 0;
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
		ft_putchar_fd(format[i], 1);
		count++;
		i++;
	}
	va_end(ap);
	return (count);
}

int	main(void)
{
	int	x = 5000;
	unsigned int y = 600;
	char str[] = "tomorrow";
	int i = printf("%x %u %d %c %s %%\n", 123, y, 5000, 'k', "wowowo");
	int j = ft_printf("%u %d %c %s %%\n", y, 5000, 'k', "vovovo");
	printf("%d\n", i);
	printf("%d\n", j);
	return (0);
}