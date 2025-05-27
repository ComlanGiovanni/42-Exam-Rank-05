#pragma once
#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <map>
#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

class Warlock
{
private:
    std::string name;
    std::string title;
    std::map<std::string, ASpell *> spells;
    Warlock(void);
    Warlock(Warlock const &rhs);
    Warlock &operator=(Warlock const &rhs);

public:
    Warlock(std::string const &name, std::string const &title);
    ~Warlock(void);
    std::string const &getName(void) const;
    std::string const &getTitle(void) const;
    void setTitle(std::string const &title);
    void introduce() const;
    void learnSpell(ASpell const *spell);
    void forgetSpell(std::string const &spellName);
    void launchSpell(std::string const &spellName, ATarget const &target);
};

#endif