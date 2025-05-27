/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/26 21:53:27 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

// When all this is done, create an implementation of ASpell called Fwoosh.
class Fwoosh : public ASpell
{
public:
	Fwoosh(void);
	virtual ~Fwoosh(void);

	// You will, of course, implement the clone() method. In the case of
	// Fwoosh, it will return a pointer to a new Fwoosh object.
	virtual Fwoosh  *clone(void) const;
};

#endif
