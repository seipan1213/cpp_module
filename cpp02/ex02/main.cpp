#include <iostream>
#include "Fixed.hpp"

int main(void)
{
  Fixed a(10);
  Fixed b(20);

  std::cout << (a < b) << std::endl;
  std::cout << (a > b) << std::endl;
  std::cout << (a <= b) << std::endl;
  std::cout << (a >= b) << std::endl;
  std::cout << (a == b) << std::endl;
  std::cout << (a != b) << std::endl;

  std::cout << std::endl;

  Fixed c(10.5f);
  Fixed d(2.5f);

  Fixed e(9);
  Fixed f(5.5f);

  std::cout << c + d << std::endl;
  std::cout << c - d << std::endl;
  std::cout << e * f << std::endl;
  std::cout << e / f << std::endl;

  std::cout << std::endl;

  Fixed g;

  std::cout << g << std::endl;
  std::cout << ++g << std::endl;
  std::cout << g << std::endl;
  std::cout << g++ << std::endl;
  std::cout << g << std::endl;

  std::cout << std::endl;

  std::cout << g << std::endl;
  std::cout << --g << std::endl;
  std::cout << g << std::endl;
  std::cout << g-- << std::endl;
  std::cout << g << std::endl;

  std::cout << std::endl;

  Fixed h(10);
  Fixed i(5.32f);

  std::cout << Fixed::max(h, i) << std::endl;
  std::cout << Fixed::min(h, i) << std::endl;

  const Fixed j(15);
  const Fixed k(25.12f);

  std::cout << std::endl;

  std::cout << Fixed::max(j, k) << std::endl;
  std::cout << Fixed::min(j, k) << std::endl;

  return 0;
}
