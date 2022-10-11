#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "libft.h"

int ft_atoi(const char *str);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	char	*b = "nyan !";
	char	*s4 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !";
	char	*s5 = "Hello \t  Please\n Trim me !";
	char	*s6 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char	*set = " \n\t";

	printf("long max + 1 = %d\n", atoi("9223372036854775818"));
	printf("long min - 1 = %d, ", atoi("-9223372036854775823"));
}