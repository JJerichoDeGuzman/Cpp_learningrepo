#include <iostream>

void reverseString(std::string& str) {
   char ch;
   for (int index = 0, len = str.length(); index < len/2; index++) {
      ch = str[index];
      str[index] = str[len-1-index];
      str[len-1-index] = ch;
   }
}

int main() {
   std::string str = "Hello, World!";
   reverseString(str);
   std::cout << str << std::endl; // Outputs: "!dlroW ,olleH"
}
