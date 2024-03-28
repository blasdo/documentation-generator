#ifndef DOCUMENTATION_GENERATOR_H
# define DOCUMENTATION_GENERATOR_H
# include <libft.h>
# include <fcntl.h>
# define PATH_ERROR 1
# define EXIST_ERROR 2
# define CREAT_ERROR 3
# define TRIES_ERROR 4
# define ALLOC_ERROR 5

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
/*
* Create prototype (with markdown syntax for code in C
*/
char	*create_prototype(void);
/*
* Create_section create all sections
* Prototype
* Description
* Return
* Know Issues
* Implementation Details
*/
char	*create_section(void);
/*
* Frontend
*/
int		document_creator(char	*path);
// menus.c
int select_lan(void);
//main.c
void	error(int errint);
#endif
