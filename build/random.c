#include "heroes.h"

void	ft_print_random(s_roster *head)
{
	int i;

	i = rand() % 119;
	while (i > 0)
	{
		head = head->next;
		i--;
	}
	ft_putstr("Console has randomed ");
	ft_putstr(head->name);
	ft_putchar('\n');
}

int		main(void)
{
	s_roster	*hero;
	s_roster	*head;
	s_roster	*prev;
	char 		*line;
	int			fd;
	int			i;

	srand(time(0));
	fd = open("../src/name_src", O_RDONLY);
	hero = malloc(sizeof(s_roster));
	head = hero;
	while (get_next_line(fd, &line) > 0)
	{
		hero->name = ft_strdup(line);
		hero->next = malloc(sizeof(s_roster));
		hero = hero->next;
		free(line);
	}
	hero->next = NULL;
	ft_print_random(head);	
	return (0);
}
