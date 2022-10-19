#include <iostream>
using namespace std;

int main()
{
  cout << "hello world!!" << endl;
  string bit = "Union";
  cout << bit << endl;
  int a, b;
  cout << "Enter the value of a: " << endl;
  cin >> a;
  cout << "Enter the value of b: " << endl;
  cin >> b;
  cout << "Before:"
       << "The value of a is " << a << endl
       << "The value of b is " << endl
       << b << endl;
  int temp = a;
  a = b;
  b = temp;
  cout << "After"
       << "The value of a is " << a << endl
       << "The value of b is " << b << endl;
  return 0;
}