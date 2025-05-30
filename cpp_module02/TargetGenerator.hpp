/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 09:45:52 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <map>
# include <string>
# include "ATarget.hpp"

// Make a TargetGenerator class, in canonical form
class TargetGenerator
{
private:
	std::map<std::string, ATarget*> targets;
// Make a TargetGenerator class, in canonical form, and as before, non-copyable.
	TargetGenerator(TargetGenerator const &rhs);
	TargetGenerator &operator=(TargetGenerator const &rhs);

public:
	TargetGenerator(void);
	~TargetGenerator(void);
										// It will have the following functions:
											 //* void learnTargetType(ATarget*),
									  //* void forgetTargetType(string const &).
									 // * ATarget* createTarget(string const &),
	void learnTargetType(ATarget* target);
	void forgetTargetType(std::string const &targetName);
	ATarget* createTarget(std::string const &targetName);
};

#endif
