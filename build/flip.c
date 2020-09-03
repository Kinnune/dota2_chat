#include "heroes.h"

int main(void)
{
	srand(time(0));
	if (rand() % 2 == 0)
	{
		ft_putstr("Console flipped a coin: HEADS\n");
	}
	else
	{
		ft_putstr("Console flipped a coin: TAILS\n");
	}
	return (0);
}