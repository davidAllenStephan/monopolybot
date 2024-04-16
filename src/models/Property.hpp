#ifndef PROPERTY_H
#define PROPERTY_H

#include "Building.hpp"
#include <string>

using namespace std;

class Property {
public:
  string title;
  int price;
  int mortgage_value;
  int base_rent;
  int set_rent;
  int one_house_rent;
  int two_house_rent;
  int three_house_rent;
  int four_house_rent;
  int five_house_rent;
  int house_cost;
  int hotel_cost;
  int building_cost;
  string color;
  Building *buildings;
  bool mortgaged;

  Property();
  Property(string title, int price, int mortgage_value, int base_rent,
           int set_rent, int one_house_rent, int two_house_rent,
           int three_house_rent, int four_house_rent, int five_house_rent,
           int house_cost, int hotel_cost, int building_cost, string color);
};

#endif
