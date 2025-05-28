/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/28 10:35:11 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <string>
# include <map>
# include "ATarget.hpp"


class TargetGenerator
{
private:
	std::map<std::string, ATarget*> targets;
	TargetGenerator(TargetGenerator const &rhs);
	TargetGenerator &operator=(TargetGenerator const &rhs);

public:
	TargetGenerator(void);
	~TargetGenerator(void);
	void learnTargetType(ATarget* target);
	void forgetTargetType(std::string const &targetName);
	ATarget* createTarget(std::string const &targetName);
};

#endif
