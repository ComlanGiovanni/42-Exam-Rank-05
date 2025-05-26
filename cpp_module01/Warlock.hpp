/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/26 22:02:39 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <map> 										   /* std::map ::iterator */
#include <string>
#include <iostream>
#include "ASpell.hpp"								 /* learnSpell and spells */
#include "ATarget.hpp"										   /* launchSpell */

class Warlock
{
private:
	std::string name;
	std::string title;

		// You will need a new attribute to store the spells your Warlock knows.
		   // Several types fit the bill, it's up to you to choose the best one.
	std::map<std::string, ASpell *> spells;

	Warlock(void);
	Warlock(Warlock const &rhs);
	Warlock &operator=(Warlock const &rhs);

public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock(void);
	std::string const &getName(void) const;
	std::string const &getTitle(void) const;
	void setTitle(std::string const &title);
	void introduce(void) const;

						   // Add to the Warlock the following member functions:

									    // learnSpell, takes a pointer to ASpell
	void learnSpell(ASpell *spell);

				  // forgetSpell, takes a string corresponding to a spell's name
	void forgetSpell(std::string const &spellName);

		// launchSpell, takes a string (a spell name) and a reference to ATarget
	void launchSpell(std::string const &spellName, ATarget const &target);
};

#endif
