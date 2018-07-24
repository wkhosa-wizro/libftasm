
#include "test.h"

int		test_tolower(void)
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
		if ((tolower(c) != ft_tolower(t_c)) || (c != t_c))
		{
			printf("tolower test %d failed\n", ascii);
			error++;
			if (c != t_c)
				printf("your tolower modified input\n");
			break;
		}
		ascii++;
	}
	if (error == 0)
		printf("tolower test passed\n");
	return (error);
}
