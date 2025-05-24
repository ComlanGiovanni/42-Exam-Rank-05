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

// Constructor with name and title
Warlock::Warlock(std::string const &name, std::string const &title) :
	m_name(name), m_title(title)
{
	// When a Warlock is created, he says:
	// <NAME>: This looks like another boring day.
	std::cout << m_name << ": This looks like another boring day." << std::endl;
}

// Destructor - clean up learned spells
Warlock::~Warlock(void)
{
	// When he dies, he says:
	// <NAME>: My job here is done!
	std::cout << m_name << ": My job here is done!" << std::endl;

	// Clean up the spells map
	std::map<std::string, ASpell*>::iterator it = m_spells.begin();
	std::map<std::string, ASpell*>::iterator ite = m_spells.end();
	while (it != ite)
	{
		delete it->second;
		++it;
	}
	m_spells.clear();
}

// Getters implementation
std::string const &Warlock::getName(void) const
{
	return m_name;
}

std::string const &Warlock::getTitle(void) const
{
	return m_title;
}

// Setter implementation
void    Warlock::setTitle(std::string const &title)
{
	m_title = title;
}

// Introduce function implementation
void    Warlock::introduce(void) const
{
	// When he introduces himself, he says:
	// <NAME>: I am <NAME>, <TITLE>!
	std::cout << m_name << ": I am " << m_name << ", " << m_title << "!" << std::endl;
}

// Spell management functions implementation

// learnSpell: makes the Warlock learn a spell
void    Warlock::learnSpell(ASpell *spell)
{
	if (spell)
	{
		// Store a copy of the spell in the map
		m_spells[spell->getName()] = spell->clone();
	}
}

// forgetSpell: makes the Warlock forget a spell
void    Warlock::forgetSpell(std::string const &spellName)
{
	// Find the spell in the map
	std::map<std::string, ASpell*>::iterator it = m_spells.find(spellName);
	
	// If found, delete it and remove from map
	if (it != m_spells.end())
	{
		delete it->second;
		m_spells.erase(it);
	}
}

// launchSpell: launches a spell on a target
void    Warlock::launchSpell(std::string const &spellName, ATarget const &target)
{
	// Find the spell in the map
	std::map<std::string, ASpell*>::iterator it = m_spells.find(spellName);
	
	// If found, launch it on the target
	if (it != m_spells.end())
	{
		it->second->launch(target);
	}
}

