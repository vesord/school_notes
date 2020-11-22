
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_gnl_struct
{
	int		fd;
	int		last_readed;
	char	unicorn;
}				t_gnl;

int main() 
{
	struct s_gnl_struct a;

	a.fd = 3;
	a.last_readed = 43;
	a.unicorn = 'U';

	printf("%d, %d, %c\n", a.fd, a.last_readed, a.unicorn);

	t_gnl *ptr_to_struct;

	ptr_to_struct = malloc(sizeof *ptr_to_struct);

	(*ptr_to_struct).fd = 321;

	printf("%d\n", (*ptr_to_struct).fd);

	return 0;
}
