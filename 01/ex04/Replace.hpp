/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 06:22:06 by afatir            #+#    #+#             */
/*   Updated: 2023/07/26 07:58:40 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

int			read_and_write(const std::string& file, const std::string& s1, const std::string& s2);
std::string	replacing(const std::string& input, const std::string& s1, const std::string& s2);

#endif