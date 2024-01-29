/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:56:42 by ayprokop          #+#    #+#             */
/*   Updated: 2024/01/27 07:07:53 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_strreverse(char str[], int str_len)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < str_len / 2)
	{
		tmp = str[i];
		str[i] = str[str_len - 1 - i];
		str[str_len - 1 - i] = tmp;
		i++;
	}
}
