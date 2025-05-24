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

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>

class ATarget;

// Create an abstract class called ASpell, in Coplien's form
class ASpell {

protected:
	// that has the following protected attributes:
	std::string		m_name;        // * name (string)
	std::string		m_effects;     // * effects (string)

public:
	// Orthodox Canonical Form
	ASpell(void);
	ASpell(ASpell const &other);
	ASpell &operator=(ASpell const &other);
	virtual ~ASpell(void);

	// ASpell has a constructor that takes its name and its effects, in that order
	ASpell(std::string const &name, std::string const &effects);

	// Both will have getters (getName and getEffects) that return strings
	// All these functions can be called on a constant object
	std::string const	&getName(void) const;
	std::string const	&getEffects(void) const;

	// Also add a clone pure method that returns a pointer to ASpell
	virtual ASpell		*clone(void) const = 0;

	// launch function that takes a reference to constant ATarget
	void			launch(ATarget const &target) const;
};

#endif // ASPELL_HPP

