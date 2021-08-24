#include <iostream>
#include <istream>

int main()
{
   int sum, val;
   std::cout << "enter number one";
   std::cin >> sum;
   std::cout << "enter number second";
   std::cin >> val;

   for (int i = std::min(sum, val);
     i <= std::max(sum, val);
     ++i)
     std::cout << i << "";

  return 0;
}
