
#include "test.h"

int		test_toupper(void)
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
		if ((toupper(c) != ft_toupper(t_c)) || (c != t_c))
		{
			printf("toupper test %d failed\n", ascii);
			error++;
			if (c != t_c)
				printf("your toupper modified input\n");
			break;
		}
		ascii++;
	}
	if (error == 0)
		printf("toupper test passed\n");
	return (error);
}
