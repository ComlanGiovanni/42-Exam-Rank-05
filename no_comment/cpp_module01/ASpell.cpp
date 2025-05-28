/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 10:22:07 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(void)
{
}

ASpell::ASpell(ASpell const &rhs)
{
	*this = rhs;
}

ASpell &ASpell::operator=(ASpell const &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->effects = rhs.effects;
	}
	return (*this);
}

ASpell::~ASpell(void)
{
}

ASpell::ASpell(std::string const &name, std::string const &effects) :
	name(name), effects(effects)
{
}

std::string const &ASpell::getName(void) const
{
	return (this->name);
}

std::string const &ASpell::getEffects(void) const
{
	return (this->effects);
}

void ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}
