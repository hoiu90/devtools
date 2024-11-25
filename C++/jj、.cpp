#include <iostream>
#include <string>

int main() {
  std::string str1 = "Hello, World!";
  std::string str2 = str1; // 直接赋值实现复制

  std::cout << "Original string: " << str1 << std::endl;
  std::cout << "Copied string: " << str2 << std::endl;

  return 0;
}
