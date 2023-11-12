/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:06:16 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/10 22:45:18 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static void process_files(const std::string& file_name, const std::string& s1, const std::string& s2)
{
    std::ifstream old_file(file_name.c_str());
    if (!old_file.is_open())
    {
        std::cout << "Unable to open input file" << std::endl;
        return;
    }

    std::ofstream replaced_file((file_name + ".replace").c_str());
    if (!replaced_file.is_open())
    {
        std::cout << "Unable to open output file" << std::endl;
        return;
    }

   std::string line;
	while (getline(old_file, line))
	{
		size_t searchPos = 0;
		size_t substringPos = 0;
		while ((substringPos = line.find(s1, searchPos)) != std::string::npos)
		{
			std::string temp = line.substr(substringPos + s1.size());
			line.erase(substringPos, s1.size());
			line += s2 + temp;
			searchPos = substringPos + s2.size();
		}
		replaced_file << line;
		if (!old_file.eof())
			replaced_file << std::endl;
	}
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		if (!av[2][0] || !av[3][0])
			std::cout << "Please enter valid strings" << std::endl;
		else
			process_files(av[1], av[2], av[3]);
	}
	else
	{
		std::cout << "usage ./sedforlosers [filename] [string to find] [string to replace]" << std::endl;
	}
}