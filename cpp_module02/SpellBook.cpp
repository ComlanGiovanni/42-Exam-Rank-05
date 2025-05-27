/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/27 20:15:31 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{
}

SpellBook::~SpellBook(void)
{
    std::map<std::string, ASpell*>::iterator it = spells.begin();
    while (it != spells.end())
    {
        delete it->second;
        ++it;
    }
    spells.clear();
}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
    {
        spells[spell->getName()] = spell->clone();
    }
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    std::map<std::string, ASpell*>::iterator it = spells.find(spellName);
    if (it != spells.end())
    {
        delete it->second;
        spells.erase(it);
    }
}

ASpell* SpellBook::createSpell(std::string const &spellName)
{
    std::map<std::string, ASpell*>::iterator it = spells.find(spellName);
    if (it != spells.end())
    {
        return it->second->clone();
    }
    return NULL;
}
