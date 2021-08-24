#include <iostream>
#include <istream>

int main()
{
  int sum = 10, val = 0;
  while (val <= 10)
  {
    sum += val;
    --val;
  }
  std::cout << "Sum of 0 to 10 inclusive is "
    << sum << std::endl;
  return 0;
}
