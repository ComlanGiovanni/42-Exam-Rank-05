/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/06 00:27:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

// Create a concrete ATarget called Dummy
class Dummy : public ATarget {

public:
	// Orthodox Canonical Form
	Dummy(void);
	Dummy(Dummy const &other);
	Dummy &operator=(Dummy const &other);
	virtual ~Dummy(void);

	// Implement the clone() method
	// Returns a pointer to a new Dummy object
	virtual Dummy   *clone(void) const;
};

#endif // DUMMY_HPP

