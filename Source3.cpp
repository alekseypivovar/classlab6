#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char buf[256];

	// char *p = fgets(buf, 256, stdin);
	// putchar(*p);

	// putchar(fgets(buf, 256, stdin)[0]);

	putchar(*fgets(buf, 256, stdin));
	putchar('\n');
	return 0;
}