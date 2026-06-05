/* exercice un peu difficile mais si t'as compris la relation
* 	des pointeurs et des strings tu poura y arriver
*	
*	dans cette exercice on va travailler avec des grid 
*	donc des pointeurs de pointeurs,
*	chaque pointeur de la grid pointe vers une strings
*	il faudra parcourir chacunes des string de la grid et 
*	compter le nombre d'occurence d'un charactère c donné en argument
*
*	int	count_occ_grid(char **grid, char c)
*
* 	exemple:
*
* 		char *grid[] = {"grid", "gris", "grizzly", "ouioui"};
* 		count_occ_grid(grid, 'i') => 5 car il y'a 5 i en tout
*
*/
#include <stdio.h>
#include <stdlib.h>

#define GREEN_CLR "\e[0;32m"
#define RED_CLR "\e[0;31m"
#define END_CLR "\e[0m"

int     count_occ_grid(char     **grid, char    c)
{
        int     a = 0;
        int     b = 0;
        int     nb = 0;
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

void	test()
{
	char *grid1[] = {"grid", "gris", "grizzly", "ouioui", NULL};
	char *grid2[] = {"ZZzzZ", "ZZZZZz", "ZZZZZZZZzZZZZ", "Z", NULL};
	char *grid3[] = {"ZZzzZ", "ZZZZZz", "ZZZZZZZZzZZZZ", "Z", NULL};

	// -- TEST 01 --
	if (count_occ_grid(grid1, 'i') == 5)
		printf("\n%sTEST_01 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_01 - KO%s", RED_CLR, END_CLR);
	// -- TEST 02 --
	if (count_occ_grid(grid2, 'z') == 4)
		printf("\n%sTEST_02 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_02 - KO%s", RED_CLR, END_CLR);
	// -- TEST 03 --
	if (count_occ_grid(grid3, '\0') == 0)
		printf("\n%sTEST_03 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_03 - KO%s", RED_CLR, END_CLR);
}

int	main()
{
	test();
	return (0);
}
