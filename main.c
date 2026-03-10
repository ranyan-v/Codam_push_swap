int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc < 2)
		return (0);

	a = parse_arguments(argc, argv);

	if (is_sorted(a))
	{
		free_stack(a);
		return (0);
	}

	// sorting logic here

	free_stack(a);
	return (0);
}