/*
 * Author: Jon
 * create a "Guess the Number" C Program
 * generate a random number from 0 to 20
 * ask the user to guess it
 * user should only be able to enter numbers from 0 - 20
 * program will indicate the user if each guess is too high or too low
 * wins game if they can guess withing five times
 * */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int randomNumber = 0;
	int guess = 0;
	int numberOfGuesses;
	time_t t;

	// initialize random number
	srand((unsigned) time(&t));

	// get the random number
	randomNumber = rand() % 21;

	printf("\nThis is a guessing game.");
	printf("\nI have chosen a number between 0 and 20 which you must guess.");

	for (numberOfGuesses = 5; numberOfGuesses > 0; --numberOfGuesses )
	{
		printf("\n You have %d tr%s left.", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies");
		printf("\nEnter a guess: ");
		scanf("%d", &guess);

		if (guess == randomNumber)
		{
			printf("\n Congratulations. You guessed it!\n");
			return 0;
		}
		else if (guess < 0 || guess > 20)
			printf("I said the number is between 0 and 20.\n");
		else if (randomNumber > guess)
			printf("Sorry, %d is wrong. My number is greater than that.\n", guess);
		else if (randomNumber < guess)
			printf("Sorry, %d is wrong. My number is less than that.\n", guess);
	}
	printf("\nYou have had five tries and failed. The number was %d\n", randomNumber);
	return 0;
}
