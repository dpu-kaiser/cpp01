/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:58:44 by dkaiser           #+#    #+#             */
/*   Updated: 2025/02/10 12:09:57 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H_
#define WEAPON_H_

#include <string>

class Weapon
{
    public: 
        Weapon(void);
        const std::string& getType(void) const;
        void setType(const std::string &type);
    private:
        std::string type;
};

#endif
