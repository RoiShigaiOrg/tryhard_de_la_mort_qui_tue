#include <stdio.h>

int	count_occ_grid(char	**grid, char	c)
{
	int	a = 0;
	int	b = 0;
	int	nb = 0;
	while(grid[a])
	{
		while(grid[a][b])
		{
			if(grid[a][b] == c)
				nb++;
			b++;
		}
		b = 0;
		a++;
	}
	return(nb);
}

int	main()
{
	char *grid[] = {"grid", "gris", "grizzly", "ouioui", NULL};
	char	c = 'i';
	printf("%d\n", count_occ_grid(grid, c));
	return(0);
}
