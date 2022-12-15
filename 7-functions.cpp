#include <iostream>

using namespace std;

void sayHi(string name, int age);

int main()
{
  sayHi("Zeeshan", 39);
  sayHi("Shahan", 36);
  sayHi("Farhan", 35);
  sayHi("Arsalan", 34);
  return 0;
}

void sayHi(string name, int age)
{
  cout << "Hello " << name << ", you are " << age << " years old" << endl;
}