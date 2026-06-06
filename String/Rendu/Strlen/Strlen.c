#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	nb = 0;
	if(str == NULL)
                return(0);
	while(str[nb])
		nb++;
	return(nb);
}



int     main()
{
	char	str[] = "";

	printf("%d\n", ft_strlen(str));
        //test();
        return (0);
}
