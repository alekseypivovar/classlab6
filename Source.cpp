#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a, const void *b)
{
	return *(char*)a - *(char*)b;
}

int main()
{
	char str[] = "1324657980sjdhgdjkhgkjfhgkjdfhgkjdfhgkjdfhgkjdfhgkjdfhgsrhtgi3ehvbncblajfmc xm,ngiueryt'ajfdk";
	qsort(str, strlen(str), sizeof(char), comp);
	puts(str);
	putchar('\n');

	return 0;
}