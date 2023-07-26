/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 06:23:21 by afatir            #+#    #+#             */
/*   Updated: 2023/07/26 08:29:57 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string replacing(const std::string& input, const std::string& s1, const std::string& s2)
{
	std::string result;
	size_t start = 0;
	size_t found = input.find(s1);

	while (found != std::string::npos){
		result += input.substr(start, found - start) + s2;
		start = found + s1.length();
		found = input.find(s1, start);
	}

	result += input.substr(start);
	return result;
}

int read_and_write(const std::string& file, const std::string& s1, const std::string& s2)
{
	std::ifstream inFile(file);
	if (!inFile.is_open()){
		std::cout << "Error opening input file: " << file << std::endl;
		return 1;
	}

	std::string content;
	std::string line;
	while (std::getline(inFile, line))
		content += line + '\n';

	std::string newContent = replacing(content, s1, s2);

	std::string newFile = file + ".replace";
	std::ofstream outFile(newFile);
	if (!outFile.is_open()){
		std::cout << "Error creating output file: " << newFile << std::endl;
		return 1;
	}

	outFile << newContent;
	inFile.close();
	outFile.close();
	return 0;
}

int main(int argc, char* argv[])
{
	if (argc == 4)
	{
		if (read_and_write(argv[1], argv[2], argv[3])) return 1;
		std::cout << "Replacement completed successfully" << std::endl;
		return 0;
	}
	std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
	return 1;
}
