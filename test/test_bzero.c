
#include "test.h"

int		test_bzero(void)
{
	int		n;
	int		t_n;
	char	*s;
	char	*t_s;
	int		error;
	int		index;
	int		temp;

	s = strdup("This is a test string!");
	t_s = strdup("This is a test string!");
	bzero(s, 0);
	ft_bzero(t_s, 0);
	index = 0;
	while (index < strlen(s))
	{
		if (s[index] != t_s[index])
		{
			printf("bzero test 1 failed \n");
			error++;
			break;
		}
		index++;
	}
	if (error == 0)
			printf("bzero test 1 passed \n");
	temp += error;
	error = 0;

	free(s);
	free(t_s);
	s = strdup("This is a test string!");
	t_s = strdup("This is a test sttring!");
	bzero(s, 4);
	ft_bzero(t_s, 4);
	index = 0;
	while (index < strlen(s))
	{
		if (s[index] != t_s[index])
		{
			printf("bzero test 2 failed \n");
			error++;
			break;
		}
		index++;
	}
	if (error == 0)
			printf("bzero test 2 passed \n");
	temp += error;
	error = temp;
	return (error);
}
