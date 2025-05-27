#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::~Fwoosh(void)
{
}

Fwoosh *Fwoosh::clone() const
{
    return (new Fwoosh());
}