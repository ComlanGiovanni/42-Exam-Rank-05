/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/06 00:27:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

// Orthodox Canonical Form implementation
// The type of Dummy is "Target Practice Dummy"
Dummy::Dummy(void) : ATarget("Target Practice Dummy") {}

Dummy::Dummy(Dummy const &other) : ATarget(other)
{
	*this = other;
}

Dummy &Dummy::operator=(Dummy const &other)
{
	if (this != &other)
	{
		ATarget::operator=(other);
	}
	return *this;
}

Dummy::~Dummy(void) {}

// Clone implementation - returns a pointer to a new Dummy object
Dummy   *Dummy::clone(void) const
{
	return new Dummy();
}

