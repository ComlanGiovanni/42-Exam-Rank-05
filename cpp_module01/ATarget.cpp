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

// Orthodox Canonical Form implementation
ATarget::ATarget(void) : m_type("") {}

ATarget::ATarget(ATarget const &other) {
	*this = other;
}

ATarget &ATarget::operator=(ATarget const &other) {
	if (this != &other) {
		this->m_type = other.m_type;
	}
	return (*this);
}

ATarget::~ATarget(void) {}

// Constructor that takes type
ATarget::ATarget(std::string const &type) : m_type(type) {}

// Getter implementation - can be called on constant objects
std::string const	&ATarget::getType(void) const {
	return (this->m_type);
}

// getHitBySpell implementation - displays the type and spell effects
void	ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << this->m_type << " has been " << spell.getEffects() << "!" << std::endl;
}

