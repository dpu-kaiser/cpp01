/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:26:18 by dkaiser           #+#    #+#             */
/*   Updated: 2025/02/10 11:33:02 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H_
#define ZOMBIE_H_

#include <string>

class Zombie
{
    public:
        Zombie(void);
        Zombie(const std::string &name);
        ~Zombie(void);
        void announce(void);
        void setName(const std::string &name);
    private:
        std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
