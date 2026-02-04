#include<unistd.h>

int	str_len(char	*str) // Nom de la fonction pas claire, pourquoi elle s'appelle strlen mais write aussi ? 
{						  // + préfère espace plutot que tab dans les arguments de fonctions
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
	return(0);				// Pourquoi elle return un int cette fonction ? ca aurait été plus simple si elle ne retournait rien
}							//  En la déclarant avec "void str_len(char *str)"

int	main(int	ac, char	**av)
{
	ac--;					//J'aime pas trop décrémenter ac direct comme ça
	if(ac == 0)				// ça aurait été peut-être mieux d'appeler str_len(av[ac - 1]) && while (ac - 1 > 0)
		write(1, "\n", 1);
	while(ac > 0)
	{
	str_len(av[ac]); 		// Manque les tab pour bien lire dans les brackets de la boucle while
	ac--;
	}						// int main qui ne retourne rien, devrais return 0 par défaut
}
