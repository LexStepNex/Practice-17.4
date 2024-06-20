#include <iostream>

void in_reverse_order(int arr[]) {
  for (int i = 0; i < 5; i++) {
    int temp = *(arr + i);
    *(arr + i) = *(arr + 9 - i);
    *(arr + 9 - i) = temp;
  }
}

void printArr(int arr[]) {
  for (int i = 0; i < 10; i++) {
    std::cout << *(arr + i) << " ";
  }
  std::cout << "\n";
}

int main() {
  std::cout << "Reverse you order of int variables\n";
  
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  
  std::cout << "Your order of int variables: ";
  printArr(arr);
  
  in_reverse_order(arr);

  std::cout << "you reverse order of int variables: ";
  printArr(arr);
}