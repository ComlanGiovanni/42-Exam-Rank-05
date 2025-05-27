#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
public:
	Fwoosh(void);
	virtual ~Fwoosh(void);
	virtual Fwoosh *clone(void) const;
};

#endif
