/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/06 00:27:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "ASpell.hpp"
#include <iostream>

ATarget::ATarget(void) : type("") //??
{
}

ATarget::ATarget(ATarget const &rhs)
{
	*this = rhs;
}

ATarget &ATarget::operator=(ATarget const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

ATarget::~ATarget(void)
{
}

ATarget::ATarget(std::string const &type) : type(type)
{
}

std::string const	&ATarget::getType(void) const
{
	return (this->type);
}

// <TYPE> is the ATarget's type, and <EFFECTS> is the return of the ASpell's
// getEffects function.
void	ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}

