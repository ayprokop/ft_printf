/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:24:21 by ayprokop          #+#    #+#             */
/*   Updated: 2024/03/14 16:43:02 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"

int	main(void)
{
	int	i;
	int	j;
	int	x;

	i = ft_printf("%X", 123123);
	j = printf("%X", 123);
	x = 0;
	printf(YELLOW "\n=====[Hex up]=====\n" RESET);
	if (i == j)
	{
		printf(GREEN "mine = %d ✅\n" RESET, i);
		printf(GREEN "original = %d ✅\n" RESET, j);
		x = 1;
	}
	else
	{
		printf(RED "mine = %d ❌\n" RESET, i);
		printf(RED "original = %d ✅\n" RESET, j);
	}
	if (x == 1)
	{
		printf(GREEN "[OK]\n" RESET);
	}
	else
	{
		printf(RED "[KO]\n" RESET);
	}
	printf("\n");
	i = ft_printf("%x", 33333);
	j = printf("%x", 33333);
	x = 0;
	printf(YELLOW "\n=====[Hex low]=====\n" RESET);
	if (i == j)
	{
		printf(GREEN "mine = %d ✅\n" RESET, i);
		printf(GREEN "original = %d ✅\n" RESET, j);
		x = 1;
	}
	else
	{
		printf(RED "mine = %d ❌\n" RESET, i);
		printf(RED "original = %d ✅\n" RESET, j);
	}
	if (x == 1)
	{
		printf(GREEN "[OK]\n" RESET);
	}
	else
	{
		printf(RED "[KO]\n" RESET);
	}
	printf("\n");
	return (0);
}
