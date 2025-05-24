/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/06 00:27:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) :
	name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << name << ": My job here is done!" << std::endl;

	// Clean up the learned spells map
	//replace it and ite by beging and end or conventional name
	std::map<std::string, ASpell*>::iterator it = spells.begin();
	std::map<std::string, ASpell*>::iterator ite = spells.end();
	
	while (it != ite)
	{
		delete it->second;
		++it;
	}
	spells.clear();
}

std::string const &Warlock::getName(void) const
{
	return (name);
}

std::string const &Warlock::getTitle(void) const
{
	return (title);
}

void    Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void    Warlock::introduce(void) const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

// Add to the Warlock the following member functions:

// learnSpell: makes the Warlock learn a spell
void    Warlock::learnSpell(ASpell *spell)
{
	// Store a copy of the spell in the map
	if (spell)
		spells[spell->getName()] = spell->clone();
}

// forgetSpell: makes the Warlock forget a spell
void    Warlock::forgetSpell(std::string const &spellName)
{
	std::map<std::string, ASpell*>::iterator it = spells.find(spellName);
	
	if (it != spells.end())
	{
		delete it->second;
		spells.erase(it);
	}
}

// launchSpell: launches a spell on a target
void    Warlock::launchSpell(std::string const &spellName, ATarget const &target)
{
	std::map<std::string, ASpell*>::iterator it = spells.find(spellName);

	if (it != spells.end())
		it->second->launch(target);
}
