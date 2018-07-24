
#include "test.h"

int		test_isascii(void)
{
	int		error;
	int		c;
	int		t_c;
	int		ascii;

	ascii = -128;
	error = 0;
	while (ascii < 256)
	{
		c = ascii;
		t_c = ascii;
		if (isascii(c))
		{
			if (!(ft_isascii(t_c)) || (c != t_c))
			{
				printf("isascii test %d failed\n", ascii);
				error++;
				if (c != t_c)
					printf("your isascii modified input\n");
				break;
			}
		}
		else
		{
			if ((ft_isascii(t_c)) || (c != t_c))
			{
				printf("isascii test %d failed\n", ascii);
				error++;
				if (c != t_c)
					printf("your isascii modified input\n");
				break;
			}
		}
		ascii++;
	}
	if (error == 0)
		printf("isascii test passed\n");
	return (error);
}
