#include "heroes.h"

void	print_roll(int	smaller, int bigger)
{
	if (bigger < 0)
	{
		bigger *= -1;
	}
	ft_putstr("Console rolls(");
	ft_putnbr(smaller);
	ft_putchar('-');
	ft_putnbr(bigger);
	ft_putstr("): ");
	ft_putnbr((rand() % bigger) + 1);
}

int main(int argc, char **argv)
{
	int	bigger;

	if (argc != 2)
	{
		print_roll(1, 100);
		return (0);
	}
	srand(time(0));
	bigger = ft_atoi(*(argv + 1));
	print_roll(1, bigger);
	return (0);
}

/*
**	todo
**	\/all of this, roll minimum, replace missing digit by 0
**	if (argc > 3 || argc > 2); roll(1-100)
**	argv[1] = smaller | argv[2] = bigger
**	roll 10-20 = roll(10-20)
**	roll 10-20asd = roll(10-20)
**	roll asd10-20 = roll(1-20)
**	roll 10 asd = roll(10-10)
**	roll 10asd asd = roll(10-10)
**	roll asd10 asd = roll(10-10)
**	roll 10asd = roll(1-10)
**	roll 10asd 40asd = roll(10-40)
**	roll asd10 40asd = roll(1-40)
**	roll asd10 asd40 = roll(1-1)
**	roll asd30 = roll(1-1)
*/