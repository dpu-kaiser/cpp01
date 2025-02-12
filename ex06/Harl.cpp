/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:37:12 by dkaiser           #+#    #+#             */
/*   Updated: 2025/02/12 13:38:42 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    int i = 0;
    while (level != levels[i])
    {
	if (i > 3)
	    break;
	i++;
    }
    switch (i)
    {
        case 0:
	    this->debug();
        case 1:
	    this->info();
        case 2:
	    this->warning();
        case 3:
	    this->error();
	    break;
        default:
	    std::cout << "[ Probably complaining ";
	    std::cout << "about insignificant problems ]" << std::endl;
	    break;
    }
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
    std::cout << "I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn’t put enough bacon in my burger! ";
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years whereas you ";
    std::cout << "started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}
