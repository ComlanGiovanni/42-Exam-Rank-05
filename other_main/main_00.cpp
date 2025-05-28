/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _Main_.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 10:05:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 10:10:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

int main()
{
	// Test 1: Création basique d'un Warlock
	{
		std::cout << "\n Test 1: Création basique " << std::endl;
		Warlock bob("Bob", "the magnificent");
		bob.introduce();
	}

	// Test 2: Changement de titre
	{
		std::cout << "\n Test 2: Changement de titre " << std::endl;
		Warlock jim("Jim", "the nauseating");
		jim.setTitle("the awesome");
		jim.introduce();
	}

	// Test 3: Vérification des getters
	{
		std::cout << "\n Test 3: Vérification des getters " << std::endl;
		Warlock richard("Richard", "the powerful");
		std::cout << "Name: " << richard.getName() << std::endl;
		std::cout << "Title: " << richard.getTitle() << std::endl;
	}

	return (EXIT_SUCCESS);
}
