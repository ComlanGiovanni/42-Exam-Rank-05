/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/27 20:15:31 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{
}

TargetGenerator::~TargetGenerator(void)
{
    std::map<std::string, ATarget*>::iterator it = targets.begin();
    while (it != targets.end())
    {
        delete it->second;
        ++it;
    }
    targets.clear();
}

void TargetGenerator::learnTargetType(ATarget* target)
{
    if (target)
    {
        targets[target->getType()] = target->clone();
    }
}

void TargetGenerator::forgetTargetType(std::string const &targetName)
{
    std::map<std::string, ATarget*>::iterator it = targets.find(targetName);
    if (it != targets.end())
    {
        delete it->second;
        targets.erase(it);
    }
}

ATarget* TargetGenerator::createTarget(std::string const &targetName)
{
    std::map<std::string, ATarget*>::iterator it = targets.find(targetName);
    if (it != targets.end())
    {
        return it->second->clone();
    }
    return NULL;
}
