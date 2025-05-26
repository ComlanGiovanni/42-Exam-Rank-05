/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:16 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/26 21:06:55 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

		 // Of course, whenever we use placeholders like <NAME>, <TITLE>, etc...
				  // in outputs, you will replace them by the appropriate value.
														 // Without the < and >.

Warlock::Warlock(std::string const &name, std::string const &title) :
	name(name), title(title)
{
								  // <NAME>: This looks like another boring day.
	std::cout << name << ": This looks like another boring day." << std::endl;
}


Warlock::~Warlock(void)
{
													   // When he dies, he says:
												 // <NAME>: My job here is done!
	std::cout << name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName(void) const
{
	return (this->name);
}

std::string const &Warlock::getTitle(void) const
{
	return (this->title);
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

															 // It must display:
												// <NAME>: I am <NAME>, <TITLE>!
void Warlock::introduce(void) const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}
