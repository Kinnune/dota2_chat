
#ifndef HEROES_H
#define HEROES_H

#include "../libft/libft.h"

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>

typedef struct		t_roster
{
	char			*name;
	char			trait;
	struct t_roster	*next;
	struct t_roster	*prev;
}					s_roster;

void	print_roll(int	smaller, int bigger);

void	ft_print_random(s_roster *head);


#endif
