#include <stdio.h>

void set_position(int *chess, int rows, int cols)
{
	chess[rows] = cols;
}

int	main(void)
{
	int	chessboard[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	set_position(chessboard, 5, 2);
	printf("%d\n", chessboard[5]);
	return(0);
}
