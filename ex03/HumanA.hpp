/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:59:28 by dkaiser           #+#    #+#             */
/*   Updated: 2025/02/10 12:25:54 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H_
#define HUMANA_H_

#include "Weapon.hpp"
#include <string>

class HumanA
{
    public:
        HumanA(const std::string &name, const Weapon &weapon);
        void attack(void) const;
    private:
        Weapon weapon;
        std::string name;
};

#endif
