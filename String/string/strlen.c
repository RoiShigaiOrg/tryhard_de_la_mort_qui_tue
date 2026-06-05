/*	Exercice classique ft_strlen, la fonction la plus utile pour travailler avec les strings
 *
 *	ft_strlen retourne le nombre de charactère dans la string sans compter '\0', voilà...
 * */
#include <stdio.h>
#include <stdlib.h>

#define GREEN_CLR "\e[0;32m"
#define RED_CLR "\e[0;31m"
#define END_CLR "\e[0m"

int     ft_strlen(char  *str)
{
        int     nb = 0;
	if(str == NULL)
		return(0);
        while(str[nb])
                nb++;
        return(nb);
}

void	test()
{
	// -- TEST 01 --
	if (ft_strlen("Test de cette string") == 20)
		printf("\n%sTEST_01 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_01 - KO%s", RED_CLR, END_CLR);

	// -- TEST 02 --
	if (ft_strlen("T") == 1)
		printf("\n%sTEST_02 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_02 - KO%s", RED_CLR, END_CLR);

	// -- TEST 03 --
	if (ft_strlen("") == 0)
		printf("\n%sTEST_03 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_03 - KO%s", RED_CLR, END_CLR);

	// -- TEST 04 --
	if (ft_strlen(NULL) == 0)
		printf("\n%sTEST_04 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_04 - KO%s", RED_CLR, END_CLR);

	// -- TEST 05 --
	if (ft_strlen("Test de \ncette string") == 21)
		printf("\n%sTEST_05 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_05 - KO%s", RED_CLR, END_CLR);
}

int	main()
{
	test();
	return (0);
}
