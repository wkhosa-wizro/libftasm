
#include "test.h"

int		test_isalpha(void)
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
		if (isalpha(c))
		{
			if (!(ft_isalpha(t_c)) || (c != t_c))
			{
				printf("isalpha test %d failed\n", ascii);
				error++;
				if (c != t_c)
					printf("your isalpha modified input\n");
				break;
			}
		}
		else
		{
			if ((ft_isupper(t_c)) || (c != t_c))
			{
				printf("isalpha test %d failed\n", ascii);
				error++;
				if (c != t_c)
					printf("your isalpha modified input\n");
				break;
			}
		}
		ascii++;
	}
	if (error == 0)
		printf("isalpha test passed\n");
	return (error);
}
