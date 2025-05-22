/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:19:09 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/22 16:19:10 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

int main(void)
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
