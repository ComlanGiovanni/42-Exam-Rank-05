/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/26 21:51:35 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

// The type of Dummy is "Target Practice Dummy"
Dummy::Dummy(void) : ATarget("Target Practice Dummy")
{
}

Dummy::~Dummy(void)
{
}

// You must also implement its clone() method.
Dummy *Dummy::clone(void) const
{
	return (new Dummy());
}
