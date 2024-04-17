#include "../../MonopolyCore/src/models/Property.hpp"

using namespace std;

int main() {

  Property *p = new Property("test_title", 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
                             "test_color");

  if (p->price != 0) {
    return 1;
  } else if (p->mortgage_value != 1) {
    return 1;
  } else if (p->base_rent != 2) {
    return 1;
  } else if (p->set_rent != 3) {
    return 1;
  } else if (p->one_house_rent != 4) {
    return 1;
  } else if (p->two_house_rent != 5) {
    return 1;
  } else if (p->three_house_rent != 6) {
    return 1;
  } else if (p->four_house_rent != 7) {
    return 1;
  } else if (p->five_house_rent != 8) {
    return 1;
  } else if (p->house_cost != 9) {
    return 1;
  } else if (p->hotel_cost != 10) {
    return 1;
  } else if (p->building_cost != 11) {
    return 1;
  }

  if (p->title != "test_title") {
    return 1;
  }
  if (p->color != "test_color") {
    return 1;
  }

  return 0;
}
