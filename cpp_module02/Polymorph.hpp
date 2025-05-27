/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:13:00 by gicomlan          #+#    #+#             */
/*   Updated: 2025/05/27 20:15:31 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include "ASpell.hpp"

class Polymorph : public ASpell
{
public:
    Polymorph(void);
    virtual ~Polymorph(void);
    virtual ASpell* clone(void) const;
};

#endif
