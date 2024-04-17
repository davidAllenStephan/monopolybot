#ifndef PLAYER_H
#define PLAYER_H

#include "Parole.hpp"
#include "Property.hpp"
#include "Token.hpp"
#include <list>

using namespace std;

class Player {
public:
  int money;
  list<class Property> properties;
  list<class Parole> paroles;
  Token token;
  Player(int money, list<Property> properties, list<Parole> paroles,
         Token token);
  void AddMoney(int amount);
  void SubMoney(int amount);
  void BuyProperty(Property property);
  void SellProperty(Property property);
  void MortgageProperty(Property property);
  void BuyBackProperty(Property property);
  void TradeProperty(Property property, Player recipient);
  void RecieveParole(Parole parole);
  void UseParole(Parole parole);
};

#endif
