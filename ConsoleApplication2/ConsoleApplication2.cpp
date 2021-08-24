#include <iostream>
#include <istream>

int main()
{
  std::cout << "Hello, world" << "\n";
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1 << " and " << v2
    << " is " << v1 + v2 << "\n";

  return 0;
}
