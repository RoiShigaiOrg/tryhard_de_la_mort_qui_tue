#include <stdio.h>

int	ft_strcmp(char	*str1, char	*str2)
{
	int	nb = 0;
	while((str1[nb] == str2[nb]) && (str1[nb] && str2[nb]))
		nb++;
	if(str1[nb] > str2[nb])
		return(str1[nb] - str2[nb]);
	if(str1[nb] < str2[nb])
                return(str1[nb] - str2[nb]);
	else
		return(0);
}

int	ft_flag_cmp(char	*flag)
{
	char	*str = "flag_01";
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

int	main(void)
{
	char	flag[] = "fla_02";
	printf("%d\n", ft_flag_cmp(flag));
	return(0);	
}
