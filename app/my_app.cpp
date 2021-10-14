#include <iostream>

#include <my_lib/my_lib.h>

int main(const int argc, const char* argv[]) {
  const int x = 1;
  const int y = 2;

  std::cout << add(x, y) << std::endl;
  std::cout << subtract(x, y) << std::endl;

  return EXIT_SUCCESS;
}
