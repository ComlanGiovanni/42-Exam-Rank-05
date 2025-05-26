/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/06 00:27:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>

												//                             |
class ATarget;											 // Forward declaration

// Create an abstract class called ASpell
class ASpell
{

protected:						// that has the following protected attributes:
	std::string		name;      								  // * name (string)
	std::string		effects;     						   // * effects (string)

public:			  	 //Create an abstract class called ASpell, in Coplien's form
	ASpell(void);
	ASpell(ASpell const &rhs);
	ASpell &operator=(ASpell const &rhs);
	virtual ~ASpell(void); // why virtual

	// ASpell has a constructor that takes its name and its effects, in that order
	ASpell(std::string const &name, std::string const &effects);

		  // Both will have getters (getName and getEffects) that return strings
					   // All these functions can be called on a constant object
	std::string const	&getName(void) const;
	std::string const	&getEffects(void) const;

				// Also add a clone pure method that returns a pointer to ASpell
	virtual ASpell		*clone(void) const = 0;

					 // Finally, add to your ASpell class a launch function that 
									   // takes a reference to constant ATarget.
	void			launch(ATarget const &target) const;

};

#endif // ASPELL_HPP

