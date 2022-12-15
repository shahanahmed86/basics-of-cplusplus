#include <iostream>

using namespace std;

int main()
{

  int age = 19;
  int *pAge = &age;
  double gpa = 2.7;
  double *pGpa = &gpa;
  string name = "Mike";
  string *pName = &name;

  cout << name << endl;
  cout << pName << endl;

  return 0;
}