#include <cstring>
#include <iostream>

bool substr(const char* str, const char* subStr) {
  for (int i = 0; i < strlen(str) - strlen(subStr); i++) {
    int count = 0;
    for (int j = 0; *(subStr + j) != '\0'; j++) {
      if (*(str + i + j) == *(subStr + j)) {
        count++;
      } else {
        break;
      }
    }
    if (count == strlen(subStr)) {
      return true;
    }
  }
  return false;
}

bool substr_v2(char* str, char* subStr) {
  for (int i = 0; i < strlen(str) - strlen(subStr); i++) {
    int count = 0;
    for (int j = 0; *(subStr + j) != '\0'; j++) {
      if (*(str + i + j) == *(subStr + j)) {
        count++;
      } else {
        break;
      }
    }
    if (count == strlen(subStr)) {
      return true;
    }
  }
  return false;
}
int main() {
  std::cout << "Does the string contain a substring?\n";

  const char* str_one = "Hello world";
  const char* str_two = "wor";
  const char* str_three = "banana";

 
  std::cout << "You string:\nstr_one: " << str_one 
            << "\nstr_two: " << str_two << "\nstr_three: " << str_three << "\n";

  std::cout << "Is the string \"str_two\" a substring of string \"str_one\"? "
            << (substr(str_one, str_two) ? "yes\n" : "no\n");
  std::cout << "Is the string \"str_three\" a substring of string \"str_one\"? "
            << (substr(str_one, str_three) ? "yes\n" : "no\n");

  // Второй вариант
  std::cout << "\n====================================\n";
  std::cout << "Second option\n";
  std::cout << "====================================\n\n";

  char text_one[] = "Hello world";
  char text_two[] = "wor";
  char text_thee[] = "banana";

  std::cout << "You string:\ntext_one: " << text_one 
            << "\ntext_two: " << text_two << "\ntext_three: " << text_thee << "\n";

  std::cout << "Is the string \"text_two\" a substring of string \"text_one\"? "
            << (substr_v2(text_one, text_two) ? "yes\n" : "no\n");
  std::cout << "Is the string \"text_three\" a substring of string \"text_one\"? "
            << (substr_v2(text_one, text_thee) ? "yes\n" : "no\n");
}