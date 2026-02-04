#include<unistd.h>

int	ft_write(char	*str, int	i)
{
	i = i-1;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(0);
}

int	lenstr(char	*str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

int	main(int	argc, char	**argv)
{
	argc = argc-1;
	while(argc > 0)
	{
		ft_write(argv[argc], lenstr(argv[argc]));
		write(1, "\n", 1);
		argc--;
	}
	return(0);
}
