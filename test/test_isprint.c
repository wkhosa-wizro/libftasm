
#include "test.h"

int		test_isprint(void)
{
	int		error;
	int		c;
	int		t_c;
	int		ascii;

	ascii = 0;
	error = 0;
	while (ascii < 256)
	{
		c = ascii;
		t_c = ascii;
		if (isprint(c))
		{
			if (!(ft_isprint(t_c)) || (c != t_c))
			{
				printf("isprint test %d failed\n", ascii);
				error++;
				if (c != t_c)
					printf("your isprint modified input\n");
				break;
			}
		}
		else
		{
			if ((ft_isprint(t_c)) || (c != t_c))
			{
				printf("isprint test %d failed\n", ascii);
				error++;
				if (c != t_c)
					printf("your isprint modified input\n");
				break;
			}
		}
		ascii++;
	}
	if (error == 0)
		printf("isprint test passed\n");
	return (error);
}
