#include <unistd.h>

// print a l'enver la string
void	revert_print(char *str, size_t len)
{
	len--;
	while (len > 0)
	{
		write(1, &str[len], 1);
		len--;
	}
	write(1, &str[len], 1);
}

// Prendre la longueur d'une string
size_t	ft_strlen(char *str) //0x564654564658
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

// main
int	main(int ac, char **av)
{
	ac--;
	if (ac > 1)
	{
		while (ac > 0)
		{
			revert_print(av[ac], ft_strlen(av[ac]));
			write(1, "\n", 1);
			ac--;
		}
		return(0);
	}
	write(1, "\n", 1);
	return (0);
}
