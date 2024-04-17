#include "main.hpp"
#include <iostream>
#include <list>

using namespace std;

int main(int argc, char *argv[]) {
  CsvManager cm;
  list<Property> properties = cm.objectify(argv[1]);
  list<Property>::iterator it;
  for (it = properties.begin(); it != properties.end(); it++) {
    cout << it->title << endl;
  }
  Special *specials = new Special();
  Tax *taxes = new Tax();
  Corner *corners = new Corner();
}
