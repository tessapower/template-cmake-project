#include <iostream>

#include <myLib/myLib.h>

int main(int argc, char* argv[]) {
  const int x = 1;
  const int y = 2;

  std::cout << add(x, y) << std::endl;

  return EXIT_SUCCESS;
}
