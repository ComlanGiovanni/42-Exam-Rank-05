/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 09:22:53 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <map>
# include <string>
# include "ASpell.hpp"

												  // Now, make a SpellBook class
class SpellBook
{
private:
	std::map<std::string, ASpell*> spells;
	// Now, make a SpellBook class, in canonical form,
	// that can't be copied or instantiated by copy.
	SpellBook(SpellBook const &rhs);
	SpellBook &operator=(SpellBook const &rhs);

public:
							  // Now, make a SpellBook class, in canonical form,
	SpellBook(void);
	~SpellBook(void);
										// It will have the following functions:
												   //* void learnSpell(ASpell*),
										   //* void forgetSpell(string const &).
									   // * ASpell* createSpell(string const &),
	void learnSpell(ASpell* spell);
	void forgetSpell(std::string const &spellName);
	ASpell* createSpell(std::string const &spellName);
};

#endif
