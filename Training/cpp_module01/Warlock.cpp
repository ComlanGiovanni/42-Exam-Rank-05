#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title)
{
	std::cout << name << ": " << "This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << name << ": " << "My job here is done!" << std::endl;
	std::map<std::string, ASpell *>::iterator it = spells.begin();
	std::map<std::string, ASpell *>::iterator ite = spells.end();

	while (it != ite)
	{
		delete it->second;
		++it;
	}
	spells.clear();
}

std::string const &Warlock::getName(void) const
{
	return (this->name);
}

std::string const &Warlock::getTitle(void) const
{
	return (this->title);
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << name << ": " << "I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell const *spell)
{
	if (spell)
		spells[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string const &spellName)
{
	std::map<std::string, ASpell *>::iterator it = spells.find(spellName);
	std::map<std::string, ASpell *>::iterator ite = spells.end();

	if (it != ite)
		delete it->second;
	spells.erase(it);
}

void Warlock::launchSpell(std::string const &spellName, ATarget const &target)
{
	std::map<std::string, ASpell *>::iterator it = spells.find(spellName);
	std::map<std::string, ASpell *>::iterator ite = spells.end();

	if (it != ite)
		it->second->launch(target);
}

int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
  delete fwoosh;
}
