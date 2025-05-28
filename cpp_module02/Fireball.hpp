/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 09:15:04 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include "ASpell.hpp"

				// Create the following two spells, on the same model as Fwoosh:
class Fireball : public ASpell
{
public:
	Fireball(void);
	virtual ~Fireball(void);
	virtual ASpell* clone(void) const;
};

#endif
