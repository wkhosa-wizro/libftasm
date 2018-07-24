
#include "test.h"

int		test_isdigit(void)
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
		if (isdigit(c))
		{
			if (!(ft_isdigit(t_c)) || (c != t_c))
			{
				printf("isdigit test %d failed\n", ascii);
				error++;
				if (c != t_c)
					printf("your isdigit modified input\n");
				break;
			}
		}
		else
		{
			if ((ft_isdigit(t_c)) || (c != t_c))
			{
				printf("isdigit test %d failed\n", ascii);
				error++;
				if (c != t_c)
					printf("your isdigit modified input\n");
				break;
			}
		}
		ascii++;
	}
	if (error == 0)
		printf("isdigit test passed\n");
	return (error);
}
