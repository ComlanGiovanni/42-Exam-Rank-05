/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 09:32:44 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class Warlock
{
private:
	std::string name;
	std::string title;
						   // Modify the Warlock, now, make it have a spell book
						 // that will be created with him and destroyed with him
	SpellBook spellBook;

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
	void learnSpell(ASpell* spell);
	void forgetSpell(std::string const &spellName);
	void launchSpell(std::string const &spellName, ATarget const &target);
};

#endif
