/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:00:55 by dkaiser           #+#    #+#             */
/*   Updated: 2025/02/10 12:29:43 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H_
#define HUMANB_H_

#include "Weapon.hpp"
#include <string>

class HumanB
{
    public:
        HumanB(const std::string &name);
        void attack(void) const;
        void setWeapon(Weapon *weapon);
    private:
        Weapon* weapon;
        std::string name;
};

#endif
