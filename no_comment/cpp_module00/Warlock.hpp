/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:22 by gicomlan          #+#    #+#             */
/*   Updated: 2025/06/02 15:14:17 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock
{
public:
	Warlock(const std::string& name, const std::string& title);
	~Warlock();
	const std::string& getName() const;
	const std::string& getTitle() const;
	void setTitle(const std::string& title);
	void introduce() const;
private:
	std::string name;
	std::string title;
	Warlock();
	Warlock(const Warlock& rhs);
	Warlock& operator=(const Warlock& rhs);
};

#endif
