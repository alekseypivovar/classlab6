#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a, const void *b)
{
	return strlen(*(char**)a) - strlen(*(char**)b);  
}

int main()
{
	char str[256][256];
	char *p[256];
	int count = 0;

	while (count < 256 && *fgets(str[count], 256, stdin) != '\n')
	{
		p[count] = str[count];
		count++;
	}
	
	qsort(p, count, sizeof(char*), comp);

	for (int i = 0; i < count; i++)
	{
		puts(p[i]);
	}
	
	putchar('\n');
	return 0;
}

/*
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
*/