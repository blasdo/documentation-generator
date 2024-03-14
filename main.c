#include "documentation_generator.h"

int fd;

void error(int errint)
{
	ft_fdprintf(2, "ERROR: ");
	switch (errint)
	{
// filesystem errors
	case 1:
		ft_fdprintf(2, "Path is not valid\n");
		break;
	case 2:
		ft_fdprintf(2, "The file alredy exists\n");
		break;
	case 3:
		ft_fdprintf(2, "Cannot create the file\n");
		break;
// menu errors
	case 4:
		ft_fdprintf(2, "TO MANY TRIES\n");
		break;
// system errors
	case 5:
		ft_fdprintf(2, "Cannot allocate memory\n");
		break;
	default:
		ft_fdprintf(2, "UNKNOWN ERROR\n");
	}
	exit(1);
}

int main(int argc, char *argv[])
{
	int fd;
	int action;

	if (argc != 2)
		ft_printf("document_generator <path_of_new_file>");
	if ((fd = (open(argv[1], O_RDWR))) > 0)
	{
		close(fd);
		error(2);
	}
	if (!document_creator(argv[1]))
		error(4);
	return (0);
}