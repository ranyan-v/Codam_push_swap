# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *str);

void	error_exit(char *str)
{
	write(1, &str, 5);
}


void	free_split(char **box)
{
	int	i;

	i = 0;
	while (box[i])
	{
		free(box[i]);
		i++;
	}
	free(box);
}

int	total_input(int argc, char **argv)
{
	int		i;
	int		j;
	int		total;
	char	**split;

	total = 0;
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			error_exit("ERROR");
		j = 0;
		while (split[j])
		{
			total++;
			j++;
		}
		free_split(split);
		i++;
	}
	return (total);
}

int	fill_box(char **box, char *input, int j)
{
	char	**split;
	int		k;
	
	split = ft_split(input, ' ');
		if (!split)
			error_exit("ERROR");
		k = 0;
		while (split[k])
		{
			box[j] = ft_strdup(split[k]);
			if (!box[j])
				error_exit("ERROR");
			j++;
			k++;
		}
		free_split(split);
		return (j);
}

char	**normalize_input(int argc, char **argv)
{
	int		i;
	int		j;
	char	**box;
	
	box = malloc(sizeof(char *) * (total_input(argc, argv) + 1));
	if (!box)
		error_exit("ERROR");
	i = 1;
	j = 0;
	while(i < argc)
	{
		j = fill_box(box, argv[i], j);
		i++;
	}
	box[j] = NULL;
	return (box);
}
