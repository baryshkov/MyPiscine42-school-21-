#define FREQUENCY_SIZE 11
#define RESPONSE_SIZE 40
#include <stdio.h>

int main(void)
{
	int answer, rating;
	int responses[RESPONSE_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
	int frequency[FREQUENCY_SIZE] = {0};
	
	answer = 0;
	rating = 1;
	while (answer <= (RESPONSE_SIZE - 1))
	{
		++frequency[responses[answer]];
		answer++;		
	}
	printf("%s%17s\n", "rating", "Frequency");
	while (rating <= (FREQUENCY_SIZE - 1))
	{
		printf("%6d%17d\n", rating, frequency[rating]);
		rating++;
	}

	return (0);
}
