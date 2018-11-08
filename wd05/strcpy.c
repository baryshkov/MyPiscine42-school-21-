#include <stdio.h>
#include <string.h>

char		*ft_strcpy(char *dest, char *src);

int main (void)
{
	char str1[] = "asdadada;;LLQWe1213";
	char str2[40];
	char str3[40];
	printf("str1 : %s\n str2 : %s\n", str1, str2);
	strcpy (str2, str1);
	printf("str1 : %s\n str2 : %s\n", str1, str2);
	ft_strcpy(str2, str1);
	printf("str1 : %s\n str2 : %s\n", str1, str2);
}

char		*ft_strcpy(char *dest, char *src)
	{
			int i;

				i = 0;
					while (src[i] != '\0')
							{
										dest[i] = src[i];
												i++;
													}
						dest[i] = '\0';
							return (dest);
	}
