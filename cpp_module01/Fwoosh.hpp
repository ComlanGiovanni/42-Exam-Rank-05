/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:30 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/06 00:27:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

// Create an implementation of ASpell called Fwoosh
class Fwoosh : public ASpell {

public:
	// Orthodox Canonical Form
	Fwoosh(void);
	Fwoosh(Fwoosh const &other);
	Fwoosh &operator=(Fwoosh const &other);
	virtual ~Fwoosh(void);

	// Implement the clone() method
	// In the case of Fwoosh, it will return a pointer to a new Fwoosh object
	virtual Fwoosh  *clone(void) const;
};

#endif // FWOOSH_HPP

