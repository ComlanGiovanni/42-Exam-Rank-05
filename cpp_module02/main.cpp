/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 10:01:44 by gicomlan         ###   ########.fr       */
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
	// Test du sujet
	{
		std::cout << "\n=== Test du sujet ===" << std::endl;
		Warlock richard("Richard", "foo");
		richard.setTitle("Hello, I'm Richard the Warlock!");
		BrickWall model1;

		Polymorph* polymorph = new Polymorph();
		TargetGenerator tarGen;

		tarGen.learnTargetType(&model1);
		richard.learnSpell(polymorph);

		Fireball* fireball = new Fireball();
		richard.learnSpell(fireball);

		ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

		richard.introduce();
		richard.launchSpell("Polymorph", *wall);
		richard.launchSpell("Fireball", *wall);

		delete polymorph;
		delete fireball;
		delete wall;
	}

	// Test de SpellBook
	{
		std::cout << "\n=== Test de SpellBook ===" << std::endl;
		Warlock merlin("Merlin", "the Magnificent");
		Fwoosh* fwoosh = new Fwoosh();
		Fireball* fireball = new Fireball();
		Polymorph* polymorph = new Polymorph();

		merlin.learnSpell(fwoosh);
		merlin.learnSpell(fireball);
		merlin.learnSpell(polymorph);

		// Test de forgetSpell
		merlin.forgetSpell("Fwoosh");

		// Test de launchSpell avec un sort oublié
		Dummy dummy;
		merlin.launchSpell("Fwoosh", dummy); // Ne devrait rien faire
		merlin.launchSpell("Fireball", dummy);
		merlin.launchSpell("Polymorph", dummy);

		delete fwoosh;
		delete fireball;
		delete polymorph;
	}

	// Test de TargetGenerator
	{
		std::cout << "\n=== Test de TargetGenerator ===" << std::endl;
		TargetGenerator tarGen;
		Dummy dummy;
		BrickWall wall;

		tarGen.learnTargetType(&dummy);
		tarGen.learnTargetType(&wall);

		// Test de createTarget
		ATarget* target1 = tarGen.createTarget("Target Practice Dummy");
		ATarget* target2 = tarGen.createTarget("Inconspicuous Red-brick Wall");
		ATarget* target3 = tarGen.createTarget("Unknown Target"); // Devrait retourner NULL

		if (target1)
			std::cout << "Target 1 créée: " << target1->getType() << std::endl;
		if (target2)
			std::cout << "Target 2 créée: " << target2->getType() << std::endl;
		if (target3)
			std::cout << "Target 3 créée: " << target3->getType() << std::endl;

		// Test de forgetTargetType
		tarGen.forgetTargetType("Target Practice Dummy");
		ATarget* target4 = tarGen.createTarget("Target Practice Dummy"); // Devrait retourner NULL
		if (target4)
			std::cout << "Target 4 créée: " << target4->getType() << std::endl;

		delete target1;
		delete target2;
		delete target3;
		delete target4;
	}

	return 0;
}
