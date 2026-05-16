/* Dans cet exo on va faire 2 fonctions à la fois:
*
*
*
*  la fameuse ft_strcmp !!! classique qui va comparer 2 strings entre elles et voir si elles sont egales ou non
*
*
*  puis la fonction int ft_flag_cmp(char *flag) qui sera l'application utile de la fonction ft_strcmp
*
*	flag_cmp va prendre une string flag et selon le flag qu'elle reçoit elle va renvoyer un chiffre précis
*	Si le flag n'est pas dans la liste la fonction doit renvoyer -1
*
*	exemple ft_flag_cmp("flag_01") => 5
*
*	liste des différents flag à traiter:
*
*		- flag_01 => 5
*		- flag_02 => 75
*		- flag_03 => 2
*		- flag_04 => 222
*		- bisou_bisou => 666
* 
*	cet exo est important car il va t'apprendre à créer différent comportement pour ton programe selon 
*		les arguments donné (qui sont sous forme de string)
*
*/
#include <stdio.h>

#define GREEN_CLR "\e[0;32m"
#define RED_CLR "\e[0;31m"
#define END_CLR "\e[0m"

void	test()
{
	printf("TEST CMP:\n");
	if (ft_strcmp("Test de cette string", "Test de cette string") == 0)
		printf("\n%sTEST_01 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_01 - KO%s", RED_CLR, END_CLR);

	if (ft_strcmp("Test de ctte string", "Test de cette string") > 0)
		printf("\n%sTEST_02 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_02 - KO%s", RED_CLR, END_CLR);

	if (ft_strcmp("", "Test de cette string") < 0)
		printf("\n%sTEST_03 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_03 - KO%s", RED_CLR, END_CLR);

	if (ft_strcmp("Test de cette string", "") > 0)
		printf("\n%sTEST_04 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_04 - KO%s", RED_CLR, END_CLR);

	printf("\nTEST FLAG:\n");
	if (ft_flag_cmp("flag_01") == 5)
		printf("\n%sTEST_01 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_01 - KO%s", RED_CLR, END_CLR);
	if (ft_flag_cmp("fla_01") == -1)
		printf("\n%sTEST_02 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_02 - KO%s", RED_CLR, END_CLR);
	if (ft_flag_cmp("flag_02") == 75)
		printf("\n%sTEST_03 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_03 - KO%s", RED_CLR, END_CLR);
	if (ft_flag_cmp("flag_03") == 2)
		printf("\n%sTEST_04 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_04 - KO%s", RED_CLR, END_CLR);
	if (ft_flag_cmp("flag_04") == 222)
		printf("\n%sTEST_05 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_05 - KO%s", RED_CLR, END_CLR);
	if (ft_flag_cmp("bisou_bisou") == 666)
		printf("\n%sTEST_06 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_06 - KO%s", RED_CLR, END_CLR);
}

int	main() {
	// Main de ce fichier, tu peux faire tes propres test de fonction ici 
	test(); // <-- NE PAS TOUCHER !
	return (0);
}
