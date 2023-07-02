#include <iostream> 
using namespace std;

string reverseString(const string& str) {
   string rev(str.length(), ' ');
   for (int index = 0, len = str.length(); index < len; index++) {
      rev[index] = str[len-1-index];
   }
   return rev;
}

int main() {
   string str = "Hello, World!";
   string rev = reverseString(str);
   cout << rev << endl; // Outputs: "!dlroW ,olleH"
}
