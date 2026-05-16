/*	Le but de cet exo cest d'ecrire la fonction count_words 
 *		qui va prendre une string (pointeur vers une chaine de caractere)
 *		et de compter le nombre de mots qu'il y'a dedans 
 * 
 *
 * 	Definiton d'un mot: suite de caractères alphanumeriques séparés par un espace ou un whitespace 
 * 		=> man isspace pour voir la liste des whitespace
 *
 *
 * 	Pour tester ton programe tu écris ta fonction dans ce fichier, puis tu compile ce fichier en utilisant
 * 		tout les flag de compilation "-Wall -Werror -Wextra"
 * * */
#include <stdio.h>

#define GREEN_CLR "\e[0;32m"
#define RED_CLR "\e[0;31m"
#define END_CLR "\e[0m"

/*	Ici ce trouve la section de test, cette fonction va balancer une batterie de test sur
 *		ta fonction, eet si tout est vert c'est que tu as réussi l'exercice BRAVO !
 *		Sinon tu peux regarder quel test ne passe pas et voir ce qui pêche dans ta fonction
 * 	
 * 	Tu t'en doutes mais tu ne touche à rien dans cette fonction, je l'ai testé et elle fonctionne
 * 		très bien tout les test passe comme escompté
 * */
void	test()
{
	// -- TEST 01 --
	if (count_words("Test de cette string") == 4)
		printf("\n%sTEST_01 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_01 - KO%s", RED_CLR, END_CLR);

	// -- TEST 02 --
	if (count_words("") == 0)
		printf("\n%sTEST_02 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_02 - KO%s", RED_CLR, END_CLR);

	// -- TEST 03 --
	if (count_words("Test") == 1)
		printf("\n%sTEST_03 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_03 - KO%s", RED_CLR, END_CLR);

	// -- TEST 04 --
	if (count_words("    test") == 1)
		printf("\n%sTEST_04 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_04 - KO%s", RED_CLR, END_CLR);

	// - TEST 05 --
	if (count_words("    test    ") == 1)
		printf("\n%sTEST_05 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_05 - KO%s", RED_CLR, END_CLR);

	// -- TEST 06 --
	if (count_words("    test   test ") == 2)
		printf("\n%sTEST_06 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_06 - KO%s", RED_CLR, END_CLR);

	// -- TEST 07 --
	if (count_words("    \ntest  \t\t test ") == 2)
		printf("\n%sTEST_07 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_07 - KO%s", RED_CLR, END_CLR);

	// -- TEST 08 --
	if (count_words("abc9efg") == 1)
		printf("\n%sTEST_08 - OK%s", GREEN_CLR, END_CLR);
	else
		printf("\n%sTEST_08 - KO%s", RED_CLR, END_CLR);
}

int	main() {
	// Main de ce fichier, tu peux faire tes propres test de fonction ici 

	test(); // <-- NE PAS TOUCHER !
	return (0);
}
