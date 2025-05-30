/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/30 23:23:17 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <map>
# include <string>
# include "ASpell.hpp"

class SpellBook
{
private:
	std::map<std::string, ASpell*> spells;
	SpellBook(SpellBook const &rhs);
	SpellBook &operator=(SpellBook const &rhs);
public:
	SpellBook(void);
	~SpellBook(void);
	void learnSpell(ASpell* spell);
	void forgetSpell(std::string const &spellName);
	ASpell* createSpell(std::string const &spellName);
};

#endif
