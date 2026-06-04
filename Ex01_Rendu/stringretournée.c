#include <unistd.h>

void	ft_reverse_write(char	*str)
{
	int	i = 0;
	while(str[i] != '\0')
		i++;
	i--;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
}


int	main(int	ac, char	**av)
{
	int	i = 0;
	ac--;  //Je sais tu n'aimes pas, mais tu as fait pareil dans ton exemple !
	while(ac > 0)
	{
		ft_reverse_write(av[ac]);
		ac--;
	}
	return(0);
}
