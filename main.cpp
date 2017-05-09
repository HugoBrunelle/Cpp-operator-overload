// Copyright 2017 <Hugo Brunelle>

#include <iostream>
#include "Fraction.h"

int main(int argc, char *argv[])
{
  Fraction fraction1(3, 4), fraction2(5, 6);
  
  std::cout << "====================" << "\n";
  std::cout << "Arithmetique test :" << "\n";
  std::cout << "====================" << "\n\n";
  std::cout << "3/4 + 5/6 = " << fraction1 + fraction2 << "\n\n";
  std::cout << "3/4 - 5/6 = " << fraction1 - fraction2 << "\n\n";
  std::cout << "3/4 * 5/6 = " << fraction1 * fraction2 << "\n\n";
  std::cout << "3/4 / 5/6 = " << fraction1 / fraction2 << "\n\n";

  std::cout << "====================" << "\n";
  std::cout << "Logical test :" << "\n";
  std::cout << "====================" << "\n\n";
  std::cout << "3/4 < 5/6 = " << (fraction1 < fraction2) << "\n\n";
  std::cout << "3/4 > 5/6 = " << (fraction1 > fraction2) << "\n\n";
  std::cout << "3/4 <= 5/6 = " << (fraction1 <= fraction2) << "\n\n";
  std::cout << "3/4 >= 5/6 = " << (fraction1 >= fraction2) << "\n\n";
  std::cout << "3/4 == 5/6 = " << (fraction1 == fraction2) << "\n\n";
  std::cout << "3/4 != 5/6 = " << (fraction1 != fraction2) << "\n\n";
 
  return 0;
}
