
#include <unistd.h>
void	first(int       x)
{
        int     a = 0;

        while(a < x)
        {
                if(a == 0 || a == x - 1)
                        write(1, "A", 1);
                else
                        write(1, "B", 1);
                a++;
        }
        write(1, "\n", 1);
}
void	last(int        x)
{
        int     a = 0;

        while(a < x)
        {
                if(a == 0 || a == x - 1)
                        write(1, "C", 1);
                else
                        write(1, "B", 1);
                a++;
        }
        write(1, "\n", 1);
}
void	middle(int    x)
{
        int     a = 0;

        while(a < x)
        {
                if(a == 0|| a == x - 1)
                        write(1, "B", 1);
                else
                        write(1, " ", 1);
                a++;
        }
        write(1, "\n", 1);
}
void     rush(int        x, int  y)
{
        int     b = 0;
        while(b < y)
        {
                if(b == 0)
                        first(x);
		else if((b == y - 1) && b > 0)
                        last(x);
                else
                        middle(x);
                b++;
        }
}
int	main(void)
{
	rush(5, 1);
	return(0);
}
