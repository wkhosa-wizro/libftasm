#include "test.h"

// test functions prototypes

int		test_bzero(void);
int		test_islower(void);
int		test_isupper(void);
int		test_isalpha(void);
int		test_isascii(void);
int		test_isprint(void);
int		test_isdigit(void);
int		test_isalnum(void);
int		test_toupper(void);
int		test_tolower(void);
int		test_puts(void);
int		test_strlen(void);
int		test_strcat(void);
int		test_memset(void);
int		test_memcpy(void);
int		test_strdup(void);
int		test_cat(void);

// source and destination memory allocation

int		main(void)
{
	int		pass;
	int		fail;

	pass = 0;
	fail = 0;

	if (test_bzero())
	{
		fail++;
		printf("bzero failed\n");
	}
	else
	{
		pass++;
		printf("bzero passed\n");
	}

	if (test_isupper())
	{
		printf("isupper failed\n");
		fail++;
	}
	else
	{
		printf("isupper passed\n");
		pass++;
	}

	if (test_islower())
	{
		printf("islower failed\n");
		fail++;
	}
	else
	{
		printf("islower passed\n");
		pass++;
	}

	if (test_isdigit())
	{
		printf("isdigit failed\n");
		fail++;
	}
	else
	{
		printf("isdigit passed\n");
		pass++;
	}

	if (test_isprint())
	{
		printf("isprint failed\n");
		fail++;
	}
	else
	{
		printf("isprintf passed\n");
		pass++;
	}

	if (test_isalnum())
	{
		printf("isalnum failed\n");
		fail++;
	}
	else
	{
		printf("isalnum passed\n");
		pass++;
	}
	if (test_isascii())
	{
		printf("isascii failed\n");
		fail++;
	}
	else
	{
		printf("isascii passed \n");
		pass++;
	}

	if (test_isalpha())
	{
		printf("isalpha failed\n");
		fail++;
	}
	else
	{
		printf("isalpha passed\n");
		pass++;
	}

	if (test_toupper())
	{
		printf("touper failed\n");
		fail++;
	}
	else
	{
		printf("toupper passed\n");
		pass++;
	}

	if (test_tolower())
	{
		printf("tolower failed\n");
		fail++;
	}
	else
	{
		printf("tolower passed\n");
		pass++;
	}

	if (test_strlen())
	{
		printf("strlen failed\n");
		fail++;
	}
	else
	{
		printf("strlen passed\n");
		pass++;
	}

	if (test_memset())
	{
		printf("memset failed\n");
		fail++;
	}
	else
	{
		printf("memset passed\n");
		pass++;
	}

	if (test_memcpy())
	{
		printf("memcpy failed\n");
		fail++;
	}
	else
	{
		printf("memcpy passed\n");
		pass++;
	}

	if (test_strcat())
	{
		printf("strcat failed\n");
		fail++;
	}
	else
	{
		printf("strcat passed\n");
		pass++;
	}

	if (test_strdup())
	{
		printf("strdup failed\n");
		fail++;
	}
	else
	{
		printf("strdup passed\n");
		pass++;
	}

	if (test_puts())
	{
		printf("puts failed\n");
		fail++;
	}
	else
	{
		printf("puts passed\n");
		pass++;
	}

	if (test_cat())
	{
		printf("cat failed\n");
		fail++;
	}
	else
	{
		printf("cat passed\n");
		pass++;
	}
	printf("\n==========================================\n");
	printf("\t test passed %d\t test failed %d \n", pass, fail);
	printf("==========================================\n");
	return (0);
}
