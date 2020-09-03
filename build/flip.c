#include "heroes.h"

int main(int argc, char **argv)
{
	int side;

	srand(time(0));
	side = rand() % 2;
	if (side == 0)
		ft_putstr("Console flipped a coin: HEADS\n");
	else
		ft_putstr("Console flipped a coin: TAILS\n");
	return (0);
}