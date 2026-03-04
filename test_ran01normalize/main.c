# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

char	**normalize_input(int argc, char **argv);

int	main(int argc, char **argv)
{
	char	**number;
	int		i;

	if (argc < 2)
		return (0);
	i = 0;
	number = normalize_input(argc, argv);
	while(number[i])
	{
		printf("number %d: %s\n", i + 1, number[i]);
		i++;
	}

	i = 0;
	while (number[i])
	{
		free(number[i]);
		i++;
	}
	free(number);
	return (0);
}