#pragma once
#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <string>
#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
    Dummy(void);
    virtual ~Dummy(void);
    virtual Dummy *clone() const;
};

#endif