// C/C++ program for splitting a string
// using strtok()
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Shailesh--7958-G-91";

	// Returns first token
	char *token = strtok(str, "-");

	// Keep printing tokens while one of the
	// delimiters present in str[].
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, "-");
    printf("%s\n",token );
	}

	return 0;
}
