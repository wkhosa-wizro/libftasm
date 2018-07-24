#include "test.h"

int		test_strdup(void)
{
	int		error;
	char	d[50] = "";
	char	t_d[50] = "";
	char	*s;
	char	*t_s;
	int		temp = 0;

	s = strdup("This is a test string!");
	t_s = strdup("This is a test string!");

	if (strcmp(strdup(s), ft_strdup(t_s)) != 0)
	{
		printf("strdup test 1 failed\n");
		if (strcmp(s, t_s) != 0)
			printf("your strdup modified source string!\n");
		if (strcmp(ft_strdup(t_s), t_s))
			printf("your strdup does not return destination string!\n");
		error++;
	}

	if (error == 0)
		printf("strdup test 1 passed\n");
	temp += error;
	error = 0;

	free(s);
	free(t_s);	
	s = strdup("");
	t_s = strdup("");
	if (strcmp(strdup(s), ft_strdup(t_s)) != 0)
	{
		printf("strdup test 2 failed\n");
		if (strcmp(s, t_s) != 0)
			printf("your strdup modified source string!\n");
		if (strcmp(ft_strdup(t_s), t_s))
			printf("your strdup does not return destination string!\n");
		error++;
	}

	if (error == 0)
		printf("strdup test 2 passed\n");
	free(s);
	free(t_s);
	temp += error;
	error = temp;
	return (error);
}
