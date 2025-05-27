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
	std::string const &getName(void) const;
	std::string const &getTitle(void) const;
	Warlock(std::string const &name, std::string const &title);
	~Warlock(void);
	void setTitle(std::string const &title);
	void introduce() const;

};

#endif
