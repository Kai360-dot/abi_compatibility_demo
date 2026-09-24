#include <iostream>
#include "calc.hpp"

int main(){
  Params p{2.0, 1.0};
  std::cout << "calc(p, 10.0) = " << calc(p, 10.0) << " (expected 21)\n";
}


