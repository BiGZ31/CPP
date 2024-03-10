#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

void    ft_replace(std::string fileName, std::string s1, std::string s2)
{
    std::string line;
    std::string str;
    std::string str2;
    size_t pos;
    
    std::ifstream Myfile(fileName);
    if(Myfile.is_open())
    {
        std::ofstream Myfile2(fileName + ".replace");
        while (getline(Myfile, line))
        {
            str += line;
            if(!Myfile.eof())
                str += '\n';
        }
        pos = str.find(s1);

        while (pos < str.length())
        {
            str.erase(pos, s1.length());
            str.insert(pos, s2);
            pos = str.find(s1, pos + s2.length()); 
        }
        Myfile2 << str;
        Myfile2.close();
        Myfile.close();
    }
    else
        std::cout << "File doesn't exist" << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return 1;
	}
	ft_replace(av[1], av[2], av[3]);
	return 0;

}