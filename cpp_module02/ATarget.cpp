/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 09:38:49 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(void)
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

void	ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << this->type << " has been " \
		<< spell.getEffects() << "!" << std::endl;
}
