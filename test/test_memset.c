#include "test.h"

int		test_memset(void)
{
	int		error;
	int		c = 66;
	int		t_c = 66;
	char	*s;
	char	*t_s;
	int		temp = 0;

	s = strdup("This is a test string!");
	t_s = strdup("This is a test string!");

	if (strcmp(memset(s, c, 0), ft_memset(t_s, t_c, 0)) != 0)
	{
		printf("memset test 1 failed\n");
		if (c != t_c)
			printf("your memset modified source char!\n");
		if (strcmp(ft_memset(t_s, t_c, 0), t_s))
			printf("your strcat does not return input destination!\n");
		error++;
	}
	if (error == 0)
		printf("memset test 1 passed\n");
	temp += error;
	error = 0;

	free(s);
	free(t_s);	
	s = strdup("This is a test string!");
	t_s = strdup("This is a test string!");

	if (strcmp(memset(s, c, 5), ft_memset(t_s, t_c, 5)) != 0)
	{
		printf("memset test 2 failed\n");
		if (c !=  t_c)
			printf("your memset modified source char!\n");
		if (strcmp(ft_memset(t_s, t_c, 0), t_s))
			printf("your memset does not return inout  destination!\n");
		error++;
	}
	if (error == 0)
		printf("memset test 2 passed\n");
	temp += error;
	free(s);
	free(t_s);
	error = temp;
	return (error);
}
