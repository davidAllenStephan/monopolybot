#include "../models/Property.hpp"
#include <string>

using namespace std;

Property::Property() {}
Property::Property(string title, int price, int mortgage_value, int base_rent,
                   int set_rent, int one_house_rent, int two_house_rent,
                   int three_house_rent, int four_house_rent,
                   int five_house_rent, int house_cost, int hotel_cost,
                   int building_cost, string color) {
  this->title = title;
  this->price = price;
  this->mortgage_value = mortgage_value;
  this->base_rent = base_rent;
  this->set_rent = set_rent;
  this->one_house_rent = one_house_rent;
  this->two_house_rent = two_house_rent;
  this->three_house_rent = three_house_rent;
  this->four_house_rent = four_house_rent;
  this->five_house_rent = five_house_rent;
  this->house_cost = house_cost;
  this->hotel_cost = hotel_cost;
  this->building_cost = building_cost;
  this->color = color;
}
