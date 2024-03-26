#include "documentation_generator.h"

int	create_document_es(int fd)
{
	char	*line;

	ft_fdprintf(fd, "# ES\n");
	ft_printf("Bienvenido al programa de ceración de documentación %s",
				"recuerde que solo puede usar una línea en cada pregunta\n");
	ft_printf("Dí el nombre de la función\n->");
	line = get_next_line(0);
	if (!line)
		return (1);
	ft_fdprintf(fd, "## %s", line);
	ft_printf("Di su prototipo\n->");
	line = get_next_line(0);
	if (!line)
		return (1);
	ft_fdprintf(fd, "### Prototipo y descripcion\n");
	ft_fdprintf(fd, "```c\n%s```\n", line);	
	ft_printf("Describe brevemente para que sirve\n->");
	line = get_next_line(0);
	if (!line)
		return (1);
	ft_fdprintf(fd, "#### Descripcion\n%s\n", line);
	return (0);
}

int document_creator(char *path)
{
	int		fd;
	t_lan languaje = select_lan();

	fd = open(path, O_CREAT | O_RDWR, 438);
	if (!fd)
		error(3);
	if (languaje == ES)
		if (create_document_es(fd))
		{
			remove(path);
			error(3);
		}
	return (1);
}
