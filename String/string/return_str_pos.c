/*	fonction char *return_str_pos(char *str, size_t pos)
*	
*		Cette fonction est cool, elle retourne un pointeur vers une 
*		des case de la string correspondante (une slice comme on appel)
*		cf: le cours que j'ai donnée
*
*		ex: return_str_pos("12345678", 5) => "678"
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define GREEN_CLR "\e[0;32m"
#define RED_CLR "\e[0;31m"
#define END_CLR "\e[0m"

char    *return_str_pos(char    *str, int       n)
{
        if(str == NULL)
                return(0);
        return(&str[n]);
}

void	test()
{
	// -- TEST 01 --
	if (strlen(return_str_pos("Test de cette string", 5)) == 15)
		printf("\n%sTEST_01 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_01 - KO%s", RED_CLR, END_CLR);

	// -- TEST 02 --
	if (strlen(return_str_pos("Test", 3)) == 1)
		printf("\n%sTEST_02 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_02 - KO%s", RED_CLR, END_CLR);

	// -- TEST 03 --
	if (strlen(return_str_pos("123456 789", 4)) == 6)
		printf("\n%sTEST_03 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_03 - KO%s", RED_CLR, END_CLR);

	// -- TEST 04 --
	if (strlen(return_str_pos("Test de \ncette string", 0)) == 21)
		printf("\n%sTEST_04 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_04 - KO%s", RED_CLR, END_CLR);
}


int	main()
{
	test();
	return (0);
}
