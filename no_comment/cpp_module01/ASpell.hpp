/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/30 23:20:34 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>

class ATarget;

class ASpell
{
protected:
	std::string name;
	std::string effects;
public:
	ASpell(void);
	ASpell(ASpell const &rhs);
	ASpell &operator=(ASpell const &rhs);
	virtual ~ASpell(void);
	ASpell(std::string const &name, std::string const &effects);
	std::string const &getName(void) const;
	std::string const &getEffects(void) const;
	virtual ASpell *clone(void) const = 0;

	void launch(ATarget const &target) const;
};

#endif
