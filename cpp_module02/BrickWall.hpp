/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 09:16:41 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

				 // let's make a new target for him, which will be the BrickWall
class BrickWall : public ATarget
{
public:
	BrickWall(void);
	virtual ~BrickWall(void);
	virtual ATarget* clone(void) const;
};

#endif
