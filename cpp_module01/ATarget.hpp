/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/06 00:27:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include <iostream>

class ASpell;

// Create an ATarget abstract class, in Coplien's form
class ATarget {

protected:
	// It has a type attribute, which is a string
	std::string		m_type;

public:
	// Orthodox Canonical Form
	ATarget(void);
	ATarget(ATarget const &other);
	ATarget &operator=(ATarget const &other);
	virtual ~ATarget(void);

	// It has a constructor that takes its type
	ATarget(std::string const &type);

	// Its associated getter, getType, that returns a reference to constant string
	// All these functions can be called on a constant object
	std::string const	&getType(void) const;

	// In much the same way as ASpell, it has a clone() pure method
	virtual ATarget		*clone(void) const = 0;

	// getHitBySpell function that takes a reference to constant ASpell
	// It will display: <TYPE> has been <EFFECTS>!
	void				getHitBySpell(ASpell const &spell) const;
};

#endif // ATARGET_HPP

