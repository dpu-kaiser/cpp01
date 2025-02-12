/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:43:55 by dkaiser           #+#    #+#             */
/*   Updated: 2025/02/12 10:30:49 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <fstream>
#include <iostream>
#include <string>

static void replace(const std::string &filename,
		    const std::string &find_str,
                    const std::string &replace_str)
{
    std::ifstream infile(filename);
    std::ofstream outfile(filename + ".replace");
    std::string line;
    std::size_t find_pos;
    std::size_t search_from;
    
    while (std::getline(infile, line))
    {
	find_pos = 0;
	search_from = 0;
	while (find_pos != std::string::npos)
	{
	    find_pos = line.find(find_str, search_from);
	    if (find_pos == std::string::npos)
	    {
		break;
	    }
	    outfile << line.substr(search_from, find_pos);
	    outfile << replace_str;
	    search_from = find_pos + find_str.length();
	}
	outfile << line.substr(search_from) << std::endl;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
	std::cerr << "Expected args: <filename> <find_str> <replace_str>";
	std::cerr << std::endl;
        return 1;
    }
    replace(argv[1], argv[2], argv[3]);
}


