/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexcapital.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:01:10 by ayprokop          #+#    #+#             */
/*   Updated: 2024/03/14 08:06:15 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hexcapital(unsigned int n)
{
	char	*str;
	int		count;
	int		i;

	str = ft_hextoa(n);
	i = 0;
	while (str[i])
	{
		str[i] = (char)ft_toupper(str[i]);
		i++;
	}
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (count);
}
