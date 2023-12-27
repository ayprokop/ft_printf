# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>

int	ft_hex(unsigned long long n)
{	
	if (n > 0)
	{
		ft_hex(n/16);
		n %= 16;
		if (n >= 0 && n <= 9)
			putchar(n + 48);
		else if (n >= 10 && n <= 15)
			putchar((unsigned char)n + 87);
		// printf("%d ", n);
	}
	// else if (n < 0)
	// 	putchar('-');
	// 	ft_hex(-n);
	putchar('0');
	return (0);
}

int	main(void)
{
	unsigned long long	n;
	n = -8;
	ft_hex(n);
	return (0);
}