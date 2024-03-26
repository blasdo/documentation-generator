#ifndef DOCUMENTATION_GENERATOR_H
# define DOCUMENTATION_GENERATOR_H
# include <libft.h>
# include <fcntl.h>

typedef enum
{
	NO_SELECTED,
	ES,
	EN
}		t_lan;
typedef enum
{
	PROTOTYPE,
	DESCRIPTION,
	RETURN,
	KNOWN_ISSUES,
	IMPLEMENTATION_DETAILS
}		t_sect;

// document_creator.c
int		document_creator(char	*path);
// menus.c
int select_lan(void);
//main.c
void	error(int errint);
#endif
