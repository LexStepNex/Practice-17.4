#include <iostream>

void in_reverse_order(int arr[], int sizeArr) {
  for (int i = 0; i < (sizeArr / 2); i++) {
    int temp = *(arr + i);
    *(arr + i) = *(arr + (sizeArr - 1) - i);
    *(arr + (sizeArr - 1) - i) = temp;
  }
}

void printArr(int arr[], int sizeArr) {
  for (int i = 0; i < sizeArr; i++) {
    std::cout << *(arr + i) << " ";
  }
  std::cout << "\n";
}

int main() {
  std::cout << "Reverse you order of int variables\n";

  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int sizeArr = std::size(arr); // как размер массива в функции использовать напрямую, я так и не понял

  std::cout << "Your order of int variables: \t\t";
  printArr(arr, sizeArr);

  in_reverse_order(arr, sizeArr);

  std::cout << "You reverse order of int variables: \t";
  printArr(arr, sizeArr);
}