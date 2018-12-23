#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a, const void *b)
{
	return strcmp(*(char**)a, *(char**)b);
	// return strlen(*(char**)a) - strlen(*(char**)b);   uporyadochit po dline strok
}

int main()
{
	const char *str[] = { "abc", "xyz", "qwerty", "klmn" };
	qsort(str, 4, sizeof(char*), comp);

	for (int i = 0; i < 4; i++)
		puts(str[i]);
	
	putchar('\n');

	return 0;
}