#include<unistd.h>

int	str_len(char	*str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
	return(0);
}

int	main(int	ac, char	**av)
{
	ac--;
	if(ac == 0)
		write(1, "\n", 1);
	while(ac > 0)
	{
	str_len(av[ac]);
	ac--;
	}
}
