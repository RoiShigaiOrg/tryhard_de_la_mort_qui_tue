#include <stdio.h>

int	count_words(char	*str)
{
	int	i = 0;
	int	nb = 0;
	if(str == NULL || str[0] == '\0')
		return(0);
	if((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z'))
	{
		nb++;
		i++;
	}
	else
		i++;

	while(str[i])
	{
		if(((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) && (str[i-1] == '\f' || str[i-1] == '\n' || str[i-1] == '\r' || str[i-1] == '\t' || str[i-1] == '\v' || str[i-1] == ' ')) 
			nb++;
		i++;
	}
	return(nb);
}




int     main()
{
	char	str[] = "";
	printf("%d\n", count_words(str));
 //       test(); //
        return (0);
}
