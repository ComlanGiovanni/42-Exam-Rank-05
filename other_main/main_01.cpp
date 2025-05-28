/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _Main_.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 10:05:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 10:11:35 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

int main()
{
	// Test 1: Création et introduction du Warlock
	{
		std::cout << "\n Test 1: Warlock basique " << std::endl;
		Warlock richard("Richard", "the Titled");
		richard.introduce();
	}

	// Test 2: Création et utilisation d'un sort
	{
		std::cout << "\n Test 2: Test du sort Fwoosh " << std::endl;
		Warlock richard("Richard", "the Titled");
		Fwoosh* fwoosh = new Fwoosh();
		Dummy dummy;

		richard.learnSpell(fwoosh);
		richard.launchSpell("Fwoosh", dummy);
		delete fwoosh;
	}

	// Test 3: Test de l'oubli d'un sort
	{
		std::cout << "\n Test 3: Test de l'oubli d'un sort " << std::endl;
		Warlock richard("Richard", "the Titled");
		Fwoosh* fwoosh = new Fwoosh();
		Dummy dummy;

		richard.learnSpell(fwoosh);
		richard.forgetSpell("Fwoosh");
		richard.launchSpell("Fwoosh", dummy); // Ne devrait rien faire
		delete fwoosh;
	}

	return (EXIT_SUCCESS);
}
