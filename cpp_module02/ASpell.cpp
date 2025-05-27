/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/27 20:08:01 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"			 /* void launch(ATarget const &target) const; */

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
								  // This one will simply call the getHitBySpell
			 // of the passed object, passing the current instance as parameter.
	target.getHitBySpell(*this);
}
