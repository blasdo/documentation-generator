#include "documentation_generator.h"

int select_lan(void)
{
	int 	tries = 0;
	char	*line;
	t_lan	languaje;

	languaje = NO_SELECTED;

	while (languaje == NO_SELECTED)
	{
		if (tries >= 3)
			error(4);
		ft_printf("LANGUAGE SELECT\n	%s\n	%s\n-> ", "ENGLISH", "SPANISH");
		line = get_next_line(0);
		if (!ft_strncmp("ENGLISH\n", line, 9) || !ft_strncmp("english\n", line, 9))
			languaje = EN;
		else if (!ft_strncmp("SPANISH\n", line, 9) || !ft_strncmp("spanish\n", line, 9))
			languaje = ES;
		else
		{
			ft_printf("please, write only a showed option all in uppercase or lowercase\n");
			++tries;
		}
	}
	return (languaje);
}

/* NOT USED
int	main_menu()
{
	int option = 0;
	int	tries = 0;
	int	selected_lan = 0;
	
	selected_lan = select_lan();
	while (option == 0 && tries <= 3)
	{
		if (selected_lan == 1)
		{
			ft_printf("not implemented\n");
			selected_lan = select_lan();
			//english main menu
		}
		if (selected_lan == 2)
		{
			//spanish main menu
			ft_printf("MENU PRINCIPAL\n	1)%s\n	2)%s\n	3)%s\n-> ", "Crear nuevo documento", "Salir", "Cambiar idioma");
			option = ft_atoi(get_next_line(0));
			if (option == 2)
				exit(0);
			else if (option == 3)
			{
				selected_lan = select_lan();
				option = 0;
			}
			else if (option != 1)
			{
				option = 0;
				++tries;
			}
		}
	}
	return (option);
}
*/