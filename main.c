#include "documentation_generator.h"

int fd;

int error(int errno)
{
	ft_fdprintf(2, "ERROR: ");
	switch (errno)
	{
		case 1:
			ft_fdprintf(2, "Path is not valid\n");
			break;
		case 2:
			ft_fdprintf(2, "The file alredy exists\n");
			break;
		case 3:
			ft_fdprintf(2, "TO MANY TRIES\n");
		default:
			ft_fdprintf(2, "UNKNOWN ERROR\n");
	}
	exit(1);
}

int	main(int argc, char *argv[])
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
	if (!docuement_creator(fd))
		error(3);
	fd = open(argv[1], O_CREAT | O_RDWR, 438);
	if (fd < 0)
		error(1);
	return (0);
}