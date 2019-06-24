#include <stdio.h>
#include <string.h>

/*int main()*/
/*{*/
	/*char myString[] = "My Name is Jon";*/

	/*char temp[50];*/
	/*strncpy(temp, myString, sizeof(temp) -1);*/
	/*printf("The length is: %s", temp);*/
	/*return 0;*/
/*}*/

/*int main()*/
/*{*/
	/*char src[50], dest[50];*/

	/*strcpy(src,  "This is source");*/
	/*strcpy(dest,  "This is destination");*/

	/*strncat(dest, src, 15);*/

	/*printf("Final destination string : |%s|", dest);*/
	/*return 0;*/
/*}*/


/*int main()*/
/*{*/
	/*printf("strcmp(\"A\", \"A\" is ");*/
	/*printf("%d\n", strcmp("A", "A"));*/
	/*return 0;*/
/*}*/

/*int main()*/
/*{*/
	/*char str[80] = "Hello how are you - my name is - jon";*/
	/*const char s[2] = "-";*/
	/*char *token;*/

	/*// get the first token*/
	/*token = strtok(str, s);*/

	/*// walk through other tokens*/
	/*while (token != NULL) {*/
		/*printf(" %s\n", token);*/

		/*token = strtok(NULL, s);*/
	/*}*/

	/*return 0;*/
/*}*/

int main()
{
	char buf[100]; //input buffer
	int nLetters = 0; // Number of letters in input
	int nDigits = 0; // Number of digits in input
	int nPunct = 0; // Number of punctuation characters

	printf("Enter an interesting string of less that %d characters: \n", 100);
	scanf("%s", buf); // read a string into buffer

	int i = 0;  // Buffer index
	while (buf[i])
	{
		if (isalpha(buf[i]))
			++nLetters;  // increment letter count
		else if (isdigit(buf[i]))
			++nDigits;  // increment digit count
		else if (ispunct(buf[i]))
			++nPunct;
		++i;
	}

	printf("\nYour string contained %d letters, %d digits and %d punctuation characters\n", nLetters, nDigits, nPunct);
		return 0;
}
