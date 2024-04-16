#include "../src/SumIntegers.hpp"
#include <vector>
int main() {
  vector<int> integers = {1, 2, 3, 4, 5};
  if (SumIntegers::sum_integers(integers) == 15) {
    return 0;
  } else {
    return 1;
  }
}
