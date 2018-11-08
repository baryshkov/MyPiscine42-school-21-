#include <stdio.h>
#define SIZE 10

int main (void)
{
	int n[SIZE] = {19, 5, 2, 6, 1, 0, 3, 5, 6, 7};
	int i, j;

	printf("%s%13s%17s\n", "Element", "Value", "Histogram");

	i = 0;
	j = 1;
	while ( i <= (SIZE -1))
	{
		printf("%7d%13d     ", i, n[i]);
		while(j <= n[i])
		{
			printf("%c", '*');
			j++;
		}
		j = 1;
		i++;
		printf("\n");
	}
	return (0);
}
