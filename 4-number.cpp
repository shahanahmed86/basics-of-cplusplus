#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int wNum = 5;
  double dNum = 5.5;

  cout << "before " << wNum << endl;
  wNum++;

  cout << "after ++ " << wNum << endl;
  wNum -= 1;

  cout << "after -= " << wNum << endl;

  cout << dNum << endl;

  cout << 10 / 3.0 << endl;

  cout << "pow(2, 5) " << pow(2, 5) << endl;
  cout << "sqrt(36) " << sqrt(36) << endl;
  cout << "round(4.4) " << round(4.4) << endl;
  cout << "ceil(4.1) " << ceil(4.1) << endl;
  cout << "floor(4.9) " << floor(4.9) << endl;
  cout << "find max -> fmax(3, 10) " << fmax(3, 10) << endl;
  cout << "find min -> fmin(3, 10) " << fmin(3, 10) << endl;

  return 0;
}