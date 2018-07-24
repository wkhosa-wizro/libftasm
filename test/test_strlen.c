#include "test.h"

int		test_strlen(void)
{
	int		error;
	int		temp;
	char	*s;
	char	*t_s;

	temp = 0;
	s = strdup("This is a test string!");
	t_s = strdup("This is a test string!");
	if ((strlen(s) != ft_strlen(t_s)) || (strcmp(s, t_s) != 0))
	{
		printf("strlen test 1 failed\n");
		if (strcmp(s, t_s) != 0)
			printf("your strlen modified source string\n");
		error++;
	}
	if (error == 0)
		printf("strlen test 1 passed\n");
	temp += error;
	error = 0;
	free(s);
	free(t_s);
	s = strdup("");
	t_s = strdup("");
	if ((strlen(s) != ft_strlen(t_s)) || (strcmp(s, t_s) != 0))
	{
		printf("strlen test 2 failed\n");
		if (strcmp(s, t_s) != 0)
			printf("your strlen modified source string\n");
		error++;
	}
	temp += error;
	if (error == 0)
		printf("strlen test 2 passed\n");
	error = temp;
	return (error);
}
