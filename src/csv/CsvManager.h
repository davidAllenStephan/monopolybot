#ifndef CSV_MANAGER_H
#define CSV_MANAGER_H

#include "../models/Property.hpp"
#include <list>
#include <string>

using namespace std;

class CsvManager {
public:
  void read_print(string file_name);
  list<Property> objectify(string file_name);
  CsvManager();
};

#endif
