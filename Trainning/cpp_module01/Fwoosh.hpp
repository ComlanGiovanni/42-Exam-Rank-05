#pragma once
#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <string>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
public:
    Fwoosh(void);
    virtual ~Fwoosh(void);
    virtual Fwoosh *clone() const;
};

#endif