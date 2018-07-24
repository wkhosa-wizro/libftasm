#include "test.h"

int		test_memcpy(void)
{
	int		error;
	char	d[50] = "";
	char	t_d[50] = "";
	char	*s;
	char	*t_s;
	int		temp = 0;

	s = strdup("This is a test string!");
	t_s = strdup("This is a test string!");

	if (strcmp(memcpy(d, s, 0), ft_memcpy(t_d, t_s, 0)) != 0)
	{
		printf("memcpy test 1 failed\n");
		if (strcmp(s, t_s) != 0)
			printf("your memset modified source string!\n");
		if (strcmp(ft_memcpy(t_d, t_s, 0), t_d))
			printf("your memset does not return destination string!\n");
		error++;
	}

	if (error == 0)
		printf("memcpy test 1 passed\n");
	temp += error;
	error = 0;

	free(s);
	free(t_s);	
	s = strdup("This is a test string!");
	t_s = strdup("This is a test string!");
	if (strcmp(memcpy(d, s, 5), ft_memcpy(t_d, t_s, 5)) != 0)
	{
		printf("memcpy test 2 failed\n");
		if (strcmp(s, t_s) != 0)
			printf("your memcpy modified source string!\n");
		if (strcmp(ft_memcpy(t_d, t_s, 5), t_d))
			printf("your memcpy does not return destination string!\n");
		error++;
	}
	free(s);
	free(t_s);
	if (error == 0)
		printf("memcpy test 2 passed\n");
	temp += error;
	error = temp;
	return (error);
}
