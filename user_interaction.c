#include "documentation_generator.h"

static int select_lan(void)
{
	int 	option = 0;
	int 	tries = 0;
	char	*line;

	while (option == 0 && tries <= 3)
	{
		ft_printf("LANGUAGE SELECT\n	%s\n	%s\n-> ", "ENGLISH", "SPANISH");
		line = get_next_line(0);
		if (!ft_strncmp("ENGLISH\n", line, 9) || !ft_strncmp("english\n", line, 9))
			option = 1;
		else if (ft_strncmp("SPANISH\n", line, 9) || !ft_strncmp("spanish\n", line, 9))
			option = 2;
		else
		{
			ft_printf("please, write only a showed option all in uppercase or lowercase\n");
			tries++;
		}
	}
	return (option);
}

static int	main_menu(){
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

int	user_interaction()
{
	int	option;

	option = main_menu();
}