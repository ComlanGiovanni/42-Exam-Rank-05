/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/06 00:27:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

// Make a Warlock class. It has to be in Coplien's form
class Warlock {

private:
	// It has the following private attributes
	std::string					name;        // * name (string)
	std::string					title;       // * title (string)
	
	// You will need a new attribute to store the spells your Warlock knows
	std::map<std::string, ASpell*>		m_spells;

	// Your Warlock will not be able to be instantiated without parameters
	Warlock(void);
	// Your Warlock will not be able to be copied
	Warlock(Warlock const &other);
	// Your Warlock will not be able to be assigned
	Warlock &operator=(Warlock const &other);

public:
	// Constructor that takes name and title
	Warlock(std::string const &name, std::string const &title);
	~Warlock(void);

	// Getters that return constant references
	std::string const	&getName(void) const;
	std::string const	&getTitle(void) const;

	// Setter for title
	void			setTitle(std::string const &title);

	// Introduce function that displays Warlock's presentation
	void			introduce(void) const;

	// Spell management functions
	// learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
	void			learnSpell(ASpell *spell);
	
	// forgetSpell, takes a string corresponding to a spell's name, and makes the
	// Warlock forget it. If it's not a known spell, does nothing
	void			forgetSpell(std::string const &spellName);
	
	// launchSpell, takes a string (a spell name) and a reference to ATarget, that
	// launches the spell on the selected target. If it's not a known spell, does nothing
	void			launchSpell(std::string const &spellName, ATarget const &target);
};

#endif // WARLOCK_HPP

