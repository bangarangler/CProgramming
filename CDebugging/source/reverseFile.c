#include <stdlib.h>
#include <stdio.h>

#define FILENAME "randomText.txt"

int main()
{
	FILE *fp = NULL;

	int cnt = 0;
	int i = 0;

	fp = fopen(FILENAME, "r");

	if (fp == NULL)
		return -1;

	// moves file pointer to end of file
	fseek(fp, 0, SEEK_END);

	// get position of the file pointer
	cnt = ftell(fp);

	while (i < cnt)
	{
		i++;
		fseek(fp, -i, SEEK_END);
		printf("%c", fgetc(fp));
	}

	printf("\n");
	fclose(fp);
	fp = NULL;

	return 0;
}
