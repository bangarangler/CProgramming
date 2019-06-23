#include <stdio.h>

int main()
{
	int sum = 0; // stores the sum of the integers
	int count = 0; // the number of integers to be summed

	// read the number on integers to be summed
	printf("\nEnter the number of integers you want to sum: ");
	scanf("%u", &count);

	// Sum integers from 1 to count
	for (int i = 1; i <= count; ++i)
	{
		printf("inside loop\n");
		sum += i;
	}

	printf("\nTotal of the first %u numbers is %u\n", count, sum);

	return 0;
}
