#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 77;
}

int main(void)
{
	int a = 42;
	
	printf("%d\n", a);

	a = 0;

	printf("%d\n", a);

	ft_ft(&a);
	printf("%d\n", a);
}

