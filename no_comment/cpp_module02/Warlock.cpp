/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 10:34:43 by gicomlan         ###   ########.fr       */
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
}

std::string const &Warlock::getName(void) const
{
	return (name);
}

std::string const &Warlock::getTitle(void) const
{
	return (title);
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void Warlock::introduce(void) const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
	spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string const &spellName)
{
	spellBook.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string const &spellName, ATarget const &target)
{
	ASpell* spell = spellBook.createSpell(spellName);

	if (spell)
	{
		spell->launch(target);
		delete spell;
	}
}
