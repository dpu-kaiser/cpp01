/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:26:18 by dkaiser           #+#    #+#             */
/*   Updated: 2025/02/10 11:00:43 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H_
#define ZOMBIE_H_

#include <string>

class Zombie
{
    public:
        Zombie(const std::string &name);
        ~Zombie(void);
        void announce(void);
    private:
        std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
