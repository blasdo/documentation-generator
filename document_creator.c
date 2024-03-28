#include "documentation_generator.h"

int	create_document(int fd, t_lan lan)
{
	char	**sections;

	/*
	* There are 5 sections
	* Prototipo
	* Descripción
	* Retorno
	* Errores conocidos
	* Detalles de implementación
	*/
	sections = malloc(5 * sizeof(void *));
	ft_printf("Bienvenido al programa de creación de documentación %s",
				"recuerde que solo puede usar una línea en cada pregunta\n");
	sections[0] = create_prototype();
	sections[1] = create_section(DESCRIPTION);
	sections[2] = create_section(RETURN);
	sections[3] = create_section(KNOWN_ISSUES);
	sections[4] = create_section(IMPLEMENTATION_DETAILS);
	for (int i = 0; i < 5; i++)
	{
		if (!sections[i])
			error(
	}
	print_sections(lan, fd);
	return (sections);
}

int document_creator(char *path)
{
	int		fd;
	t_lan	lan = select_lan();

	fd = open(path, O_CREAT | O_RDWR, 438);
	if (!fd)
		error(3);
	create_document(lan);	
	return (1);
}
