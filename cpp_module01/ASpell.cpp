/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/06 00:27:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"

// Orthodox Canonical Form implementation
ASpell::ASpell(void) {}

ASpell::ASpell(ASpell const &other)
{
	*this = other;
}

ASpell &ASpell::operator=(ASpell const &other)
{
	if (this != &other)
	{
		this->m_name = other.m_name;
		this->m_effects = other.m_effects;
	}
	return *this;
}

ASpell::~ASpell(void) {}

// Constructor that takes name and effects
ASpell::ASpell(std::string const &name, std::string const &effects) :
	m_name(name), m_effects(effects) {}

// Getters implementation - can be called on constant objects
std::string const &ASpell::getName(void) const
{
	return this->m_name;
}

std::string const &ASpell::getEffects(void) const
{
	return this->m_effects;
}

// Launch function that calls the target's getHitBySpell with current spell
void    ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}

