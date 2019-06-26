#include <stdio.h>

int main()
{
	FILE *fp = NULL;

	fp = fopen("file.txt", "w+");

	if (fp != NULL)
		fprintf(fp, "%s %s %s %s %d", "Hello", "my", "number", "is", 1255);

	fclose(fp);
	return(0);
}
