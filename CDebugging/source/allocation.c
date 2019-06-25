#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	char *str;

	// Initial memory allocation
	str = (char *) malloc(15 * sizeof(char));
	strcpy(str, "jon");
	printf("String = %s, Address = %p\n", str, str);

	// Reallocating memory
	str = (char *)realloc(str, 25 * sizeof(char));
	strcat(str, ".com");
	printf("String = %s, Address = %p\n", str, str);

	free(str);

	return 0;
}
