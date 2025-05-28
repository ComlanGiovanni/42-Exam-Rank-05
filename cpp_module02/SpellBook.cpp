/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 09:30:58 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{
}

												  // From Warlock implementation

SpellBook::~SpellBook(void)
{
	std::map<std::string, ASpell *>::iterator it = spells.begin();
	std::map<std::string, ASpell *>::iterator ite = spells.end();

	while (it != ite)
	{
		delete it->second;
		++it;
	}
	spells.clear();
}

												  // From Warlock implementation

void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		spells[spell->getName()] = spell->clone();
}

												  // From Warlock implementation

void SpellBook::forgetSpell(std::string const &spellName)
{
	std::map<std::string, ASpell *>::iterator it = spells.find(spellName);
	std::map<std::string, ASpell *>::iterator ite = spells.end();

	if (it != ite)
	{
		delete it->second;
		spells.erase(it);
	}
}

												  // From Warlock implementation

ASpell* SpellBook::createSpell(std::string const &spellName)
{
	std::map<std::string, ASpell *>::iterator it = spells.find(spellName);
	std::map<std::string, ASpell *>::iterator ite = spells.end();

	if (it != ite)
		return (it->second->clone());
	return (NULL);
}
