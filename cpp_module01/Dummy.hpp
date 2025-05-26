/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/26 21:53:06 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

// In the same way, create a concrete ATarget called Dummy
class Dummy : public ATarget
{
public:
	Dummy(void);
	virtual ~Dummy(void);

	// You must also implement its clone() method.
	virtual Dummy *clone(void) const;
};

#endif
