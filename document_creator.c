#include "documentation_generator.h"

/*
* View blueprint for more information about format
*/

void	print_document(int fd)
{
	//not implemented
}
int	create_document(int fd, t_lan lan)
{
	char	**document;

	/*
	* There are 5 sections
	* Prototipo
	* Descripción
	* Retorno
	* Errores conocidos
	* Detalles de implementación
	*/
	document = malloc(5 * sizeof(void *));
	ft_printf("Bienvenido al programa de ceración de documentación %s",
				"recuerde que solo puede usar una línea en cada pregunta\n");
	document[0] = create_prototype();
	document[1] = create_section(DESCRIPTION);
	document[2] = create_section(RETURN);
	document[3] = create_section(KNOWN_ISSUES);
	document[4] = create_section(IMPLEMENTATION_DETAILS);
	for (int i = 0; i < 5; i++)
	{
		if (!document[i])
			error(
	}
	print_document(lan, fd);
	return (document);
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
