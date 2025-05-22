/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:50:43 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/22 17:58:01 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) :
	name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
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

void		Warlock::introduce(void) const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

//c++ -std=c++17 Warlock.cpp && ./a.out | cat -e

int main()
{
  Warlock const richard("Richard", "Mistress of Magma");
  richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

  Warlock* jack = new Warlock("Jack", "the Long");
  jack->introduce();
  jack->setTitle("the Mighty");
  jack->introduce();

  delete jack;

  return (0);
}
