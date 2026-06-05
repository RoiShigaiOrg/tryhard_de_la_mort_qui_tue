#include <stdio.h>

char	*return_str_pos(char	*str, int	n)
{
	if(str == NULL)
		return(0);
	return(&str[n]);
}

int	main(void)
{
	char	str[] = "Test de \ncette string";
	int	n = 4;
	printf("%s\n", return_str_pos(str, n));
	return(0);
}
