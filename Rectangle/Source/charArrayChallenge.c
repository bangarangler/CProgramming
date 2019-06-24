/*
 * write a program that tets your understanding of char arrays
 * write function to count the number of characters in a string (length)
 * cannot use the strlen library function
 * function should take a character array as a parameter
 * should return an int (the length)
 * write a function to concatenate two character strings
 * cannot use the strcat library function
 * char result[]
 * const char str1[]
 * const char str2[]
 * can return void
 * write a function that determines if two strings are equal
 * cannot use strcmp library function
 * function should take two const char arrays as parameters and return a
 * Boolean of true if they are equal and false otherwise
 * */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength(const char string[]);
void concat(char result[], const char str[], const char str1[]);
bool equalStrings(const char s1[], const char s2[]);


int main()
{
	const char word1[] = "jon";
	const char word2[] = "ok";
	const char word3[] = "whatever";
	char result[50];

	printf("%d   %d   %d\n", stringLength(word1), stringLength(word2), stringLength(word3));

	concat(result, word1, word2);
	printf("\n%s", result);

	printf("\n%d\n", equalStrings("Jon", "Jon"));
	printf("\n%d\n", equalStrings("Jons", "Jon"));

	return 0;
}

int stringLength(const char string[])
{
	int count = 0;

	while (string[count] != '\0')
		++count;

	return count;
}

void concat(char result[], const char str[], const char str1[])
{
	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
	{
		result[i] = str[i];
	}

	for (j = 0; str1[j] != '\0'; ++j)
		result[i + j] = str1[j];

	result[i + j] = '\0';
}


bool equalStrings(const char s1[], const char s2[])
{
	int i = 0;
	bool isEquals = false;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		++i;

	if (s1[i] == '\0' && s2[i] == '\0')
		isEquals = true;
	else
		isEquals = false;

	return isEquals;
}
