#ifndef PLAYER_H
#define PLAYER_H

#include <Parole.hpp>
#include <Property.hpp>
#include <Token.hpp>

class Player {
public:
  int money;
  Property *properties;
  Parole *paroles;
  Token token;
};

#endif
