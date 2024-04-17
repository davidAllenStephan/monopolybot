#include "../models/Player.hpp"
#include <list>

using namespace std;

Player::Player(int money, list<Property> properties, list<Parole> paroles,
               Token token) {
  this->money = money;
  this->properties = properties;
  this->paroles = paroles;
  this->token = token;
}

void Player::AddMoney(int amount) { this->money = this->money + amount; }
void Player::SubMoney(int amount) { this->money = this->money - amount; }
void Player::BuyProperty(Property property) {
  this->properties.push_front(property);
  Player::SubMoney(property.value);
}
void Player::SellProperty(Property property) {
  this->properties.remove(property);
  Player::AddMoney(property.value);
}
void Player::MortgageProperty(Property property) {
  property.mortgaged = true;
  Player::AddMoney(property.value);
}
void Player::BuyBackProperty(Property property) {
  property.mortgaged = false;
  Player::SubMoney(property.buyBack);
}
void Player::TradeProperty(Property property, Player recipient) {

}
