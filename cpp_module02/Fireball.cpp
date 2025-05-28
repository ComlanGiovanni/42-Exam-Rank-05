/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 09:40:31 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

				   // * Fireball (Name: "Fireball", Effects: "burnt to a crisp")
Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp")
{
}

Fireball::~Fireball(void)
{
}

ASpell* Fireball::clone(void) const
{
	return (new Fireball());
}
