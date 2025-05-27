#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <string>

class ATarget;

class ASpell
{
protected:
	std::string name;
	std::string effects;

public:
	ASpell(void);
	ASpell(ASpell const &rhs);
	ASpell &operator=(ASpell const &rhs);
	ASpell(std::string const &name, std::string const &effects);
	virtual ~ASpell(void);
	std::string const &getName(void) const;
	std::string const &getEffects(void) const;
	virtual ASpell *clone(void) const = 0;
	void launch(ATarget const &target) const;
};

#endif
