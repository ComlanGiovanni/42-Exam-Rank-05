/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/30 23:19:07 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include <iostream>

class ASpell;

class ATarget
{
protected:
	std::string type;

public:
	ATarget(void);
	ATarget(ATarget const &rhs);
	ATarget &operator=(ATarget const &rhs);
	virtual ~ATarget(void);
	ATarget(std::string const &type);
	std::string const &getType(void) const;
	virtual ATarget *clone(void) const = 0;
	void getHitBySpell(ASpell const &spell) const;
};

#endif
