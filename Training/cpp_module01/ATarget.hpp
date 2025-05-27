#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <string>
#include <iostream>

class ASpell;

class ATarget
{
protected:
	std::string type;

public:
	ATarget(void);
	ATarget(ATarget const &rhs);
	ATarget &operator=(ATarget const &rhs);
	ATarget(std::string const &type);
	virtual ~ATarget(void);
	std::string const &getType(void) const;
	virtual ATarget *clone(void) const = 0;
	void getHitBySpell(ASpell const &spell) const;
};

#endif
