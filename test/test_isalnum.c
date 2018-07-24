
#include "test.h"

int		test_isalnum(void)
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
		if (isalnum(c))
		{
			if (!(ft_isalnum(t_c)) || (c != t_c))
			{
				printf("isalnum test %d failed\n", ascii);
				error++;
				if (c != t_c)
					printf("your isalnum modified input\n");
				break;
			}
		}
		else
		{
			if ((ft_isalnum(t_c)) || (c != t_c))
			{
				printf("isalnum test %d failed\n", ascii);
				error++;
				if (c != t_c)
					printf("your isalnum modified input\n");
				break;
			}
		}
		ascii++;
	}
	if (error == 0)
		printf("isalnum test passed\n");
	return (error);
}
