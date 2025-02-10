/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:37:18 by dkaiser           #+#    #+#             */
/*   Updated: 2025/02/10 11:47:15 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string*  stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address of str:                " << &str << std::endl;
    std::cout << "Address held by stringPTR:     " << stringPTR << std::endl;
    std::cout << "Address held by stringREF:     " << &stringREF << std::endl;

    std::cout << "Value of str:                  " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}
