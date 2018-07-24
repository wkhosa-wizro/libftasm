#include "test.h"

int		test_cat(void)
{
	int		error;
	int		fd;

	error = 0;
	fd = open("file.txt", O_RDONLY);

	if (fd < 0)
		printf("failed to open file\n cat test not terminated\n");
	else
		ft_cat(fd);
	close(fd);

	return (error);
}
