
#include "libft.h"
#include <dirent.h>

int		main(int argc, char **argv)
{
	DIR	*directory;
	struct dirent *data;
	
	if (argc || argv) {}
	
	if (argc > 1)
		directory = opendir(argv[1]);
	else
		directory = opendir(".");
	if (directory)
	{
		while ((data = readdir(directory)))
		{
			ft_printf("%s\n", data->d_name);
		}
	}
	return (0);
}
