using namespace std;

#include <iostream>

int main() {
  int a;
  char s[100]; // s points to a string of max 99 characters

  cout << "This is a simple program." << endl;

  cout << endl;

  cout << "Type your age : ";
  cin >> a;

  cout << "Type your name : ";
  cin >> s;

  cout << endl;

  cout << "Hello " << s << " you're " << a << " year's old " << endl;
  cout << endl;

  return 0;
}
