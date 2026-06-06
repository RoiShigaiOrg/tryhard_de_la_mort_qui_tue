
#include <unistd.h>
#include <stdio.h>

// Fonction pour print une ligne avec les characteres voulu
void	print_horizontal(int x, char c1, char c2)
{
	int	i;

	i = 0;
	write(0, &c1, 1);
	if (x <= 1)
		return ;
	while (i < (x - 2))
	{
		write(0, &c2, 1);
		i++;
	}
	write(0, &c1, 1);
	write(0, "\n", 1);
}

// Fonction pour convertir les arguments en nombre en despi
int	to_int(char *nb)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (nb[i])
	{
		res *= 10;
		res += nb[i] - '0';
		i++;
	}
	return (res);
}

// fonction principale qui prends les dimensions de la case 
// 	ainsi que les characteres, va print lignes par lignes avec les characteres voulu
//
// 	pour les lignes au milieux on envoie directement le charactere espace dans la fonction
void	rush(int x, int y, char *c)
{
	int	i;

	i = 0;
	if (x == 0 && y == 0)
		return ;
	print_horizontal(x, c[0], c[1]);
	if (y <= 1)
		return ;
	while (i < (y - 2))
	{
		print_horizontal(x, c[0], ' ');
		i++;
	}
	print_horizontal(x, c[0], c[1]);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	rush(to_int(av[1]), to_int(av[2]), av[3]);
	return (0);
}
