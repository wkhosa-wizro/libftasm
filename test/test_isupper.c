
#include "test.h"

int		test_isupper(void)
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
		if (isupper(c))
		{
			if (!(ft_isupper(t_c)) || (c != t_c))
			{
				printf("isupper test %d failed\n", ascii);
				error++;
				if (c != t_c)
					printf("your isupper modified input\n");
				break;
			}
		}
		else
		{
			if ((ft_isupper(t_c)) || (c != t_c))
			{
				printf("isupper test %d failed\n", ascii);
				error++;
				if (c != t_c)
					printf("your isupper modified input\n");
				break;
			}
		}
		ascii++;
	}
	if (error == 0)
		printf("isupper test passed\n");
	return (error);
}
