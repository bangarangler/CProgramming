/*
 * write a program that allows a user to input a text string. program will print
 * the text that was inputed. program will utilize dynamic memory allocation.
 * user can enter the limit of the string they are entering. you can use this
 * limit when invokin malloc
 * program should create a char pointer only, no character arrays
 * */
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int size;
	char *text = NULL;

	printf("Enter limit of the text: \n");
	scanf("%d", &size);

	text = (char *) malloc(size * sizeof(char));

	if (!text)
	{
		printf("Enter some text: \n");
		scanf(" ");
		gets(text);

		printf("Inputted text is: %s\n", text);
	}

	free(text);
	text = NULL;

	return 0;
}
