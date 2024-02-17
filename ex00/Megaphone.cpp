#include <ctype.h>
#include <iostream>

int	main(int ac, char **av)
{
	int i = 1;

	if (ac < 2)
		std::cout << "You need at least one argument." << std::endl;
	else
	{
		while(av[i])
		{
			int j = 0;
			while(av[i][j] && av[i][j])
			{
				av[i][j] = toupper(av[i][j]);
				j++;
			}
			std::cout << av[i];
			if (av[i + 1])
				std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}