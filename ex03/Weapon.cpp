/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:59:21 by dkaiser           #+#    #+#             */
/*   Updated: 2025/02/10 12:11:07 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{}

const std::string& Weapon::getType(void) const
{
    return this->type;
}

void Weapon::setType(const std::string &type)
{
    this->type = type;
}
