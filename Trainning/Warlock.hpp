/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:19:57 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/22 17:50:28 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock
{

private:
	std::string name;
	std::string title;

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
};

#endif // WARLOCK_HPP
