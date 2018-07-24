
#include "test.h"

int		test_islower(void)
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
		if (islower(c))
		{
			if (!(ft_islower(t_c)) || (c != t_c))
			{
				printf("islower test %d failed\n", ascii);
				error++;
				if (c != t_c)
					printf("your islowerr modified input\n");
				break;
			}
		}
		else
		{
			if ((ft_islower(t_c)) || (c != t_c))
			{
				printf("islower test %d failed\n", ascii);
				error++;
				if (c != t_c)
					printf("your islower modified input\n");
				break;
			}
		}
		ascii++;
	}
	if (error == 0)
		printf("islowerr test passed\n");
	return (error);
}
