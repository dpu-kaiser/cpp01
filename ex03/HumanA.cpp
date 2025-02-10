/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:00:00 by dkaiser           #+#    #+#             */
/*   Updated: 2025/02/10 12:59:46 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &weapon)
    :weapon(&weapon),
     name(name)
{}

void HumanA::attack(void) const
{
    std::cout << name << " attacks with their ";
    std::cout << weapon->getType() << std::endl;
}
