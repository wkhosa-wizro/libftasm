#ifndef TEST_H
# define TEST_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# include "../libfts.h"

int		test_bzero(void);
int		test_islower(void);
int		test_isupper(void);
int		test_isalpha(void);
int		test_isdigit(void);
int		test_isalnum(void);
int		test_isascii(void);
int		test_isprint(void);
int		test_toupper(void);
int		test_tolower(void);
int		test_strlen(void);
int		test_strcat(void);
int		test_memset(void);
int		test_memcpy(void);
int		test_puts(void);
int		test_strdup(void);
int		test_cat(void);

#endif
