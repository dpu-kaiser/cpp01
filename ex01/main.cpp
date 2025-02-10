/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:09:42 by dkaiser           #+#    #+#             */
/*   Updated: 2025/02/10 11:27:25 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* horde = zombieHorde(5, "Bob");
    for (int i = 0; i < 5; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
}
