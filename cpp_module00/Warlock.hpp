/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:22:22 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/22 17:42:08 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

									//Expected files   : Warlock.cpp Warlock.hpp

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>

						// Make a Warlock class. It has to be in Coplien's form.
class Warlock
{

private:							// It has the following private attributes :
	std::string		name;									  // * name (string)
	std::string		title;									 // * title (string)

						// Make a Warlock class. It has to be in Coplien's form.

	 // Your Warlock will not be able to instantiated without a name and a title
	Warlock(void);// Warlock bob;							  //Does not compile
						// Your Warlock will not be able to instantiated by copy
	Warlock(Warlock const &rhs);						 // instantiated by copy
									//Your Warlock will not be able to be copied
	Warlock &operator=(Warlock const &rhs);

public:
				 // a constructor that takes, in this order, its name and title.
						   // Warlock bob("Bob", "the magnificent");  //Compiles
						   // Warlock jim("Jim", "the nauseating");   //Compiles
	Warlock(std::string const &name, std::string const &title);
	~Warlock(void);

							 //* getName, returns a reference to constant string
	std::string const	&getName(void) const;
							//* getTitle, returns a reference to constant string
	std::string const	&getTitle(void) const;
		  //Both these functions will have to be callable on a constant Warlock.

												 // Create the following setter:
			// * setTitle, returns void and takes a reference to constant string
	void			setTitle(std::string const &title);

						  // Our Warlock must also be able to introduce himself,
										   // while boasting with all its might.

									// So you will write the following function:
													// * void introduce() const;
	void			introduce(void) const;
};

#endif // WARLOCK_HPP

