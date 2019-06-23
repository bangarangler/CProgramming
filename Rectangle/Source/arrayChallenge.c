/*
 * Author: Jon
 * create a program that will find all the prime numbers from 3 - 100
 * no input to the program
 * output will be each prime number separated by a space on a single line
 * need to create an array that will store each prime number as it is generated
 * hard-code first two prime numbers (2 and 3) in the primes array
 * should utilize loops to only find prime numbers up to 100 and a loop to
 * print out the primes array
 * number considered prime if not evenly divisible by any other previous prime
 * numbers
 * */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	int p;
	int i;

	int primes[50] = {0};
	int primeIndex = 2;

	bool isPrime;

	// hardcode first two prime numbers
	primes[0] = 2;
	primes[1] = 3;

	for (p = 5; p <= 100; p = p+2)
	{
		isPrime = true;

		for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
			if (p % primes[i] == 0)
				isPrime = false;

		if (isPrime == true)
		{
			primes[primeIndex] = p;
			++primeIndex;
		}
	}
	for (i = 0; i < primeIndex; ++i)
		printf("%i ", primes[i]);
	printf("\n");
	return 0;
}
