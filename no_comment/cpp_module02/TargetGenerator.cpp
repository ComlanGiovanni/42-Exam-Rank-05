/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/31 11:12:22 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{
}

TargetGenerator::~TargetGenerator(void)
{
	std::map<std::string, ATarget *>::iterator it = targets.begin();
	std::map<std::string, ATarget *>::iterator ite = targets.end();

	while (it != ite)
	{
		delete it->second;
		++it;
	}
	targets.clear();
}

void TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		targets[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const &targetName)
{
	std::map<std::string, ATarget *>::iterator it = targets.find(targetName);
	std::map<std::string, ATarget *>::iterator ite = targets.end();

	if (it != ite)
	{
		delete it->second;
		targets.erase(it);
	}
}

ATarget* TargetGenerator::createTarget(std::string const &targetName)
{
	std::map<std::string, ATarget *>::iterator it = targets.find(targetName);
	std::map<std::string, ATarget *>::iterator ite = targets.end();

	if (it != ite)
		return (it->second->clone());
	return (NULL);
}
