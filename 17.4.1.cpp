#include <iostream>

void exchange(int* i, int* j) {
  *i = *i + *j;
  *j = *i - *j;
  *i = *i - *j;
}

int main() {
  std::cout << "Swap two numbers\n";
  int a = 1;
  int b = 99;
  
  std::cout << "Befor swap: a = " << a << " b = " << b << "\n";

  exchange(&a, &b);
  
  std::cout << "After swap: a = " << a << " b = " << b << "\n";
}