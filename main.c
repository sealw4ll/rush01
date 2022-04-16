#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Error: no input.\n", 16); 	
		return 0;
	}
	char	*input = argv[1];
	printf("%d\n", argc);
	printf("%s\n", input);	
	printf("%d\n", sizeof(*input));
	return 0;
}
