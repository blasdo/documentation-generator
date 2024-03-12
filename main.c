#include "documentation_generator.h"

int fd;

int error(int errno)
{
	switch (errno)
	{
		case 1:
			ft_fdprintf(2, "ERROR: path is not valid");
			break;
		default:
			ft_fdprintf(2, "UNKNOWN ERROR");
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		ft_printf("document_generator <path_of_new_file>");
	fd = open(argv[1]);
	if (fd < 0)
		error(1);
}