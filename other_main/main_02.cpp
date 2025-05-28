/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _Main_.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 10:05:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 10:12:18 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "BrickWall.hpp"
#include "TargetGenerator.hpp"

int main()
{
	// Test 1: Test de SpellBook
	{
		std::cout << "\n Test 2: Test de SpellBook " << std::endl;
		Warlock merlin("Merlin", "the Magnificent");
		Dummy dummy;

		// Test d'apprentissage de sorts
		merlin.learnSpell(new Fwoosh());
		merlin.learnSpell(new Fireball());
		merlin.learnSpell(new Polymorph());

		// Test de lancement de sorts
		merlin.launchSpell("Fwoosh", dummy);
		merlin.launchSpell("Fireball", dummy);
		merlin.launchSpell("Polymorph", dummy);

		// Test d'oubli de sort
		merlin.forgetSpell("Fwoosh");
		merlin.launchSpell("Fwoosh", dummy); // Ne devrait rien faire
	}

	// Test 2: Test de TargetGenerator
	{
		std::cout << "\n Test 3: Test de TargetGenerator " << std::endl;
		TargetGenerator tarGen;
		Dummy dummy;
		BrickWall wall;

		// Test d'apprentissage de cibles
		tarGen.learnTargetType(&dummy);
		tarGen.learnTargetType(&wall);

		// Test de création de cibles
		ATarget* target1 = tarGen.createTarget("Target Practice Dummy");
		ATarget* target2 = tarGen.createTarget("Inconspicuous Red-brick Wall");

		if (target1)
			std::cout << "Cible 1 créée: " << target1->getType() << std::endl;
		if (target2)
			std::cout << "Cible 2 créée: " << target2->getType() << std::endl;

		// Test d'oubli de cible
		tarGen.forgetTargetType("Target Practice Dummy");
		ATarget* target3 = tarGen.createTarget("Target Practice Dummy");
		// Devrait retourner NULL
		if (target3)
			std::cout << "Cible 3 créée: " << target3->getType() << std::endl;

		delete target1;
		delete target2;
		delete target3;
	}

	return 0;
}
