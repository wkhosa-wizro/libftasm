#include "test.h"

int		test_puts(void)
{
	int		error;

	error = 0;
	printf("<");
	ft_puts("");
	printf(">\n");
	printf("<");
	ft_puts("This is a test string for puts!");
	printf(">\n");

	return (error);
}
