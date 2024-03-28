#include "documentation_generator.h"

/*
* View blueprint for more information about format
*/
void	print_document(int fd, t_lan lan, char **sections)
{
	char *sections_es[7] = {"# ES\n", "## %s", "### Prototipo y descripcion\n%s",
		"# Descrripcion\n%s", "#### Retorno\n%s", "#### Errores conocidos\n%s",
			"#### Detalles de implementación\n%s"};
	char *sections_en[7] = {"# ES", "## %s", "### Prototipo y descripcion",
		"# Descrripcion", "#### Retorno", "#### Errores conocidos",
			"#### Detalles de implementación"};
	
	if (lan == ES)
	{
		ft_fdprintf(fd,  sections_es[0]);
		for (int i = 1; i < 7; i++)
			ft_fdprintf(fd, "%s\n", sections_es[i], sections[i]);
	}
	if (lan == EN)
	{
		ft_fdprintf(fd,  sections_en[0]);
		for (int i = 1; i < 7; i++)
			ft_fdprintf(fd, "%s\n", sections_es[i], sections[i]);
	}
}
