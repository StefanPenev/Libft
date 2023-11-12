#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	test_ft_isalpha(void)
{
	printf("------------ TESTING FT_ISALPHA ------------\n\n");
	char	chars[] = {'a', 'A', 'z', 'Z', 's', 'F', ' ', '3', ',', '`', '{', '@', '['};
	int i = 0;

	while (chars[i])
	{
		printf("Test %d, %s\n", i, isalpha(chars[i]) == ft_isalpha(chars[i]) ? "PASS" : "FAIL");
		i++;
	}
}

void	test_ft_isdigit(void)
{
	printf("------------ TESTING FT_ISDIGIT ------------\n\n");
	char	chars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ',', '@', '[', 'a', 'C'};
	int i = 0;

	while (chars[i])
	{
		printf("Test %d, %s\n", i, isdigit(chars[i]) == ft_isdigit(chars[i]) ? "PASS" : "FAIL");
		i++;
	}
}

void	test_ft_isalnum(void)
{
	printf("------------ TESTING FT_ISALNUM ------------\n\n");
	char	chars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ',', '@', '[', 'a', 'C'};
	int i = 0;

	while (chars[i])
	{
		printf("Test %d, %s\n", i, isalnum(chars[i]) == ft_isalnum(chars[i]) ? "PASS" : "FAIL");
		i++;
	}
}

void	test_ft_isascii(void)
{
	printf("------------ TESTING FT_ISASCII ------------\n\n");
	char	chars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ',', '@', '[', 'a', 'C'};
	int i = 0;

	while (chars[i])
	{
		printf("Test %d, %s\n", i, isascii(chars[i]) == ft_isascii(chars[i]) ? "PASS" : "FAIL");
		i++;
	}
}

void	test_ft_isprint(void)
{
	printf("------------ TESTING FT_ISPRINT ------------\n\n");
	char	chars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ',', '@', '[', 'a', 'C', '\n', '\t'};
	int i = 0;

	while (chars[i])
	{
		printf("Test %d, %s\n", i, isprint(chars[i]) == ft_isprint(chars[i]) ? "PASS" : "FAIL");
		i++;
	}
}

void	test_ft_strlen(void)
{
	printf("------------ TESTING FT_STRLEN ------------\n\n");

	printf("Test 0, %s\n", strlen("Hello") == ft_strlen("Hello") ? "PASS" : "FAIL");
	printf("Test 1, %s\n", strlen("42") == ft_strlen("42") ? "PASS" : "FAIL");
	printf("Test 2, %s\n", strlen("Piscine") == ft_strlen("Piscine") ? "PASS" : "FAIL");
	printf("Test 3, %s\n", strlen("0123456789") == ft_strlen("0123456789") ? "PASS" : "FAIL");
	printf("Test 4, %s\n", strlen("42Reloaded") == ft_strlen("42Reloaded") ? "PASS" : "FAIL");
	printf("Test 5, %s\n", strlen("42Cirriculum") == ft_strlen("42Cirriculum") ? "PASS" : "FAIL");
}

void	test_ft_memset(void)
{
	printf("------------ TESTING FT_MEMSET ------------\n\n");

	char test[] = "Hello World";
	char ft_test[] = "Hello World";
	char value = '.';
	int num = 6;

	if (ft_strncmp(memset(test, value, num), ft_memset(ft_test, value, num), 20) == 0)
		printf("PASS\n");
	else
		printf("FAIL\n");
}

void	test_ft_bzero(void)
{
	printf("------------ TESTING FT_BZERO ------------\n\n");

	char test[] = "Hello World";
	char ft_test[] = "Hello World";

	bzero(test, 6);
	ft_bzero(ft_test, 6);

	int	i = 0;
	while (i < 11 && test[i] == ft_test[i])
		i++;
	if (i == 11)
		printf("PASS\n");
	else
		printf("FAIL\n");
}

void	test_ft_memcpy(void)
{
	printf("------------ TESTING FT_MEMCPY ------------\n\n");

	char test[] = "Hello";
	char ft_test[] = "Hello";

	if (ft_strncmp(memcpy(test, "12345", 3), ft_memcpy(ft_test, "12345", 3), 10) == 0)
		printf("PASS\n");
	else
		printf("FAIL\n");
}

void	test_ft_memmove(void)
{
	printf("------------ TESTING FT_MEMMOVE ------------\n\n");

	char test[] = "Hello";
	char ft_test[] = "Hello";

	if (ft_strncmp(memmove(test, "12345", 3), ft_memmove(ft_test, "12345", 3), 10) == 0)
		printf("PASS\n");
	else
		printf("FAIL\n");
}

void	test_ft_strlcpy(void)
{
	printf("------------ TESTING FT_STRLCPY ------------\n\n");

	char test[] = "Hello";
	char ft_test[] = "Hello";

	if (strlcpy(test, "World", 5) == ft_strlcpy(ft_test, "World", 5)
		&& ft_strncmp(test, ft_test, 20) == 0)
		printf("PASS\n");
	else
		printf("FAIL\n");
}

void	test_ft_strlcat(void)
{
	printf("------------ TESTING FT_STRLCAT ------------\n\n");

	char test[] = "Hello";
	char ft_test[] = "Hello";

	if (strlcat(test, "World", 5) == ft_strlcat(ft_test, "World", 5)
		&& ft_strncmp(test, ft_test, 20) == 0)
		printf("PASS\n");
	else
		printf("FAIL\n");
}

void	test_ft_toupper(void)
{
	printf("------------ TESTING FT_TOUPPER ------------\n\n");

	char	chars[] = {'a', 'C', 'd', 'D', ' ', '~'};
	int i = 0;

	while (chars[i])
	{
		printf("Test %d, %s\n", i, toupper(chars[i]) == ft_toupper(chars[i]) ? "PASS" : "FAIL");
		i++;
	}
}

void	test_ft_tolower(void)
{
	printf("------------ TESTING FT_TOLOWER ------------\n\n");

	char	chars[] = {'a', 'C', 'd', 'D', ' ', '~'};
	int i = 0;

	while (chars[i])
	{
		printf("Test %d, %s\n", i, tolower(chars[i]) == ft_tolower(chars[i]) ? "PASS" : "FAIL");
		i++;
	}
}

void	test_ft_strchr(void)
{
	printf("------------ TESTING FT_STRCHR------------\n\n");

	char test[] = "Hello World";

	if (ft_strncmp(strchr(test, 'H'), ft_strchr(test, 'H'), 20) == 0 
		&& strchr(test, 'H') != NULL && ft_strchr(test, 'H') != NULL)
		printf("PASS\n");
	else
		printf("FAIL\n");

	if (ft_strncmp(strchr(test, '\0'), ft_strchr(test, '\0'), 20) == 0 
		&& strchr(test, '\0') != NULL && ft_strchr(test, '\0') != NULL)
		printf("PASS\n");
	else
		printf("FAIL\n");
}

void	test_ft_strrchr(void)
{
	printf("------------ TESTING FT_STRRCHR------------\n\n");

	char test[] = "Hello World";

	if (ft_strncmp(strrchr(test, 'e'), ft_strrchr(test, 'e'), 20) == 0 
		&& strrchr(test, 'e') != NULL && ft_strrchr(test, 'e') != NULL)
		printf("PASS\n");
	else
		printf("FAIL\n");

	if (ft_strncmp(strrchr(test, '\0'), ft_strrchr(test, '\0'), 20) == 0 
		&& strrchr(test, '\0') != NULL && ft_strrchr(test, '\0') != NULL)
		printf("PASS\n");
	else
		printf("FAIL\n");
}

void	test_ft_strncmp(void)
{
	printf("------------ TESTING FT_STRNCMP------------\n\n");

	char test1[] = "Hello World";
	char test2[] = "Hello World";

	if (strncmp(test1, test2, 20) == ft_strncmp(test1, test2, 20))
		printf("PASS\n");
	else
		printf("FAIL\n");
}

void	test_ft_memchr(void)
{
	printf("------------ TESTING FT_MEMCHR------------\n\n");

	char test[] = "Hello World";

	if (ft_strncmp(memchr(test, 'e', 6), ft_memchr(test, 'e', 6), 20) == 0
		&& memchr(test, 'e', 6) != NULL && ft_memchr(test, 'e', 6) != NULL)
		printf("PASS\n");
	else
		printf("FAIL\n");
}

void	test_ft_memcmp(void)
{
	printf("------------ TESTING FT_MEMCMP------------\n\n");

	char test1[] = "Hello World";
	char test2[] = "Hello World";

	if (memcmp(test1, test2, 20) == ft_memcmp(test1, test2, 20))
		printf("PASS\n");
	else
		printf("FAIL\n");
}

void	test_ft_strnstr(void)
{
	printf("------------ TESTING FT_STRNSTR------------\n\n");

	char haystack[] = "Hello World";
	char needle[] = "World";

	if (strnstr(haystack, needle, 20) == ft_strnstr(haystack, needle, 20))
		printf("PASS\n");
	else
		printf("FAIL\n");
}

void	test_ft_atoi(void)
{
	printf("------------ TESTING FT_ATOI------------\n\n");

	if (atoi("123") == ft_atoi("123"))
		printf("PASS\n");
	else
		printf("FAIL\n");

	if (atoi("-123") == ft_atoi("-123"))
		printf("PASS\n");
	else
		printf("FAIL\n");

	if (atoi("0") == ft_atoi("0"))
		printf("PASS\n");
	else
		printf("FAIL\n");

	if (atoi("+45") == ft_atoi("+45"))
		printf("PASS\n");
	else
		printf("FAIL\n");

	if (atoi("----++++45---dad456") == ft_atoi("----++++45---dad456"))
		printf("PASS\n");
	else
		printf("FAIL\n");
}

void	test_ft_calloc(void)
{
	printf("------------ TESTING FT_CALLOC------------\n\n");

	void	*ptr = NULL;
	void	*ft_ptr = NULL;

	ptr = calloc(4, sizeof(int));
	ft_ptr = ft_calloc(4, sizeof(int));

	if (ptr != NULL && ft_ptr != NULL)
		printf("PASS\n");
	else
		printf("FAIL\n");
}

void	test_ft_strdup(void)
{
	printf("------------ TESTING FT_STRDUP------------\n\n");

	char test[] = "Hello World";
	char	*ptr;
	char	*ft_ptr;

	ptr = strdup(test);
	ft_ptr = ft_strdup(test);
	if (ft_strncmp(ptr, ft_ptr, 20) == 0)
		printf("PASS\n");
	else
		printf("FAIL\n");
}

int main()
{
    //test_ft_isalpha();
	//test_ft_isdigit();
	//test_ft_isalnum();
	//test_ft_isascii();
	//test_ft_isprint();
	//test_ft_strlen();
	//test_ft_memset();
	//test_ft_bzero();
	//test_ft_memcpy();
	//test_ft_memmove();
	//test_ft_strlcpy();
	//test_ft_strlcat();
	//test_ft_toupper();
	//test_ft_tolower();
	//test_ft_strchr();
	//test_ft_strrchr();
	//test_ft_strncmp();
	//test_ft_memchr();
	//test_ft_memcmp();
	//test_ft_strnstr();
	//test_ft_atoi();
	//test_ft_calloc();
	//test_ft_strdup();
}