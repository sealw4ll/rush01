#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_boxsize(char *input);
int **rush(char *input, int **ptr);

int main()
{
	int 	**box;
	char	*input = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";;
	int	i = 0;
	int j = 0;

/*	if (argc != 2)
	{
		write(1, "Error: no input.\n", 16); 	
		return 0;
	}*/
//	printf("%d\n", argc);
	printf("%s\n", input);	
	printf("%d\n", ft_boxsize(input));
	
	box = rush(input, box);
	while (i < 4)
	{
		while (j < 4)
		{
			printf("%d ", box[i][j]);
			j++;
		}
		j = 0;
		printf("\n");
		i++;
	}
	return 0;
}
