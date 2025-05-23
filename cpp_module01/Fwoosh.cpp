/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/06 00:27:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

// Default constructor will set the name to "Fwoosh" and the effects to "fwooshed"
Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::Fwoosh(Fwoosh const &other) : ASpell(other)
{
	*this = other;
}

Fwoosh &Fwoosh::operator=(Fwoosh const &other)
{
	if (this != &other)
		ASpell::operator=(other);
	return *this;
}

Fwoosh::~Fwoosh(void)
{
}

// In the case of Fwoosh, it will return a pointer to a new Fwoosh object.
Fwoosh  *Fwoosh::clone(void) const
{
	return (new Fwoosh());
}

