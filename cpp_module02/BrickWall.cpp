/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 09:16:24 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

		  // which will be the BrickWall (Type: "Inconspicuous Red-brick Wall").
BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall")
{
}

BrickWall::~BrickWall(void)
{
}

ATarget* BrickWall::clone(void) const
{
	return (new BrickWall());
}
