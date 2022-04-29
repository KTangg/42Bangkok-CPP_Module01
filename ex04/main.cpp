/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 23:13:17 by spoolpra          #+#    #+#             */
/*   Updated: 2022/04/29 10:09:13 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sed.hpp"

void	sedFile(std::ifstream &ifs, std::ofstream &ofs, std::string s1, std::string s2)
{
	size_t		s1_len;
	std::string	read_data = "";
	std::string	buffer;

	s1_len = s1.length();
	// Read All data in infile stream and collect in read_data string
	while (std::getline(ifs, buffer))
	{
		read_data.append(buffer);
		// If file already EOF then no more newline
		if (!ifs.eof())
			read_data.append("\n");
	}
	// Handling empty s1 case
	if (s1.empty())
	{
		ofs << read_data;
		return ;
	}
	// Printing data to outfile stream
	do
	{
		// Find s1 substr index in read_data
		int	index = read_data.find(s1);
		if (index != -1)
		{
			// If s1 exist in read_data then write until find s1 index then write s2 instead
			ofs << read_data.substr(0, index) << s2;
			// Erase data that already write
			read_data.erase(0, index + s1_len);
		}
		else
		{
			// Write the rest of data
			ofs << read_data;
			break ;
		}
	}
	while (!read_data.empty());
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./ft_sed <filename> <old string> <replacing string>" << std::endl;
		return (INVALID_ARGUMENT);
	}
	std::string	infile = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream	ifs(infile.c_str());
	if (!ifs)
	{
		std::cerr << "Error: Couldn't open file " << infile << std::endl;
		return (INVALID_FILEPATH);
	}
	std::string	outfile = infile + ".replace";
	std::ofstream	ofs(outfile.c_str());
	if (!ofs)
	{
		std::cerr << "Error: Couldn't open file " << outfile << std::endl;
		ifs.close();
		return (INVALID_FILEPATH);
	}
	sedFile(ifs, ofs, s1, s2);
	ifs.close();
	ofs.close();
	return (0);
}
