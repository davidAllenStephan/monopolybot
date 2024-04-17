#include "CsvManager.hpp"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void CsvManager::read_print(string file_name) {
  fstream fin;
  fin.open(file_name, ios::in);
  string header, title, price, mortgage_value, base_rent, set_rent,
      one_house_rent, two_house_rent, three_house_rent, four_house_rent,
      five_house_rent, house_cost, hotel_cost, building_cost, color;
  getline(fin, header);
  while (getline(fin, title, ',')) {
    cout << "{" << endl;
    cout << "title: " << title << endl;
    getline(fin, price, ',');
    cout << "price: " << price << endl;
    getline(fin, mortgage_value, ',');
    cout << "mortgage_value: " << mortgage_value << endl;
    getline(fin, base_rent, ',');
    cout << "base_rent: " << base_rent << endl;
    getline(fin, set_rent, ',');
    cout << "set_rent: " << set_rent << endl;
    getline(fin, one_house_rent, ',');
    cout << "one_house_rent: " << one_house_rent << endl;
    getline(fin, two_house_rent, ',');
    cout << "two_house_rent: " << two_house_rent << endl;
    getline(fin, three_house_rent, ',');
    cout << "three_house_rent: " << three_house_rent << endl;
    getline(fin, four_house_rent, ',');
    cout << "four_house_rent: " << four_house_rent << endl;
    getline(fin, five_house_rent, ',');
    cout << "five_house_rent: " << five_house_rent << endl;
    getline(fin, house_cost, ',');
    cout << "house_cost: " << house_cost << endl;
    getline(fin, hotel_cost, ',');
    cout << "hotel_cost: " << hotel_cost << endl;
    getline(fin, building_cost, ',');
    cout << "building_cost: " << building_cost << endl;
    getline(fin, color, '\n');
    cout << "color: " << color << endl;
    cout << "}" << endl;
  }
}

list<Property> CsvManager::objectify(string file_name) {
  list<Property> property_list;
  fstream fin;
  fin.open(file_name, ios::in);
  string header, title, price, mortgage_value, base_rent, set_rent,
      one_house_rent, two_house_rent, three_house_rent, four_house_rent,
      five_house_rent, house_cost, hotel_cost, building_cost, color;
  getline(fin, header);
  while (getline(fin, title, ',')) {
    getline(fin, price, ',');
    getline(fin, mortgage_value, ',');
    getline(fin, base_rent, ',');
    getline(fin, set_rent, ',');
    getline(fin, one_house_rent, ',');
    getline(fin, two_house_rent, ',');
    getline(fin, three_house_rent, ',');
    getline(fin, four_house_rent, ',');
    getline(fin, five_house_rent, ',');
    getline(fin, house_cost, ',');
    getline(fin, hotel_cost, ',');
    getline(fin, building_cost, ',');
    getline(fin, color, '\n');
    Property *p = new Property(
        title, stoi(price), stoi(mortgage_value), stoi(base_rent),
        stoi(set_rent), stoi(one_house_rent), stoi(two_house_rent),
        stoi(three_house_rent), stoi(four_house_rent), stoi(five_house_rent),
        stoi(house_cost), stoi(hotel_cost), stoi(building_cost), color);
    property_list.push_front(*p);
  }
  return property_list;
}

CsvManager::CsvManager() {}
