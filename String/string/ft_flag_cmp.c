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

int     ft_strcmp(char  *str1, char     *str2)
{
        int     nb = 0;
        while((str1[nb] == str2[nb]) && (str1[nb] && str2[nb]))
                nb++;
        if(str1[nb] > str2[nb])
                return(str1[nb] - str2[nb]);
        if(str1[nb] < str2[nb])
                return(str1[nb] - str2[nb]);
        else
                return(0);
}

int ft_flag_cmp(char *flag)
{
        char    *str = "flag_01";
        if(ft_strcmp(flag, str) == 0)
                return(5);
        str = "flag_02";
        if(ft_strcmp(flag, str) == 0)
                return(75);
        str = "flag_03";
        if(ft_strcmp(flag, str) == 0)
                return(2);
        str = "flag_04";
        if(ft_strcmp(flag, str) == 0)
                return(222);
        str = "bisou_bisou";
        if(ft_strcmp(flag, str) == 0)
                return(666);
        else
                return(-1);
}

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
