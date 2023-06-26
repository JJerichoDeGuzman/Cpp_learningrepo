#include <iostream>

int main () {
using std::cout;
if (true)  { cout << "yes\n"; }  // yes
if (false) { cout << "yes\n"; }  // –
if (23)    { cout << "yes\n"; }  // yes (23 - true)
if (0)     { cout << "yes\n"; }  // – (0 - false)
int i = 0;
cout << "enter an integer: ";
std::cin >> i;
if (i < 0) { 
  cout << "negative\n"; 
} else if (i == 0) {
  cout << "zero\n"; 
} else {
  cout << "positive\n"; 
}
}


