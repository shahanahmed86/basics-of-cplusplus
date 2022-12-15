#include <iostream>

using namespace std;

int main()
{
  int luckyNums[10] = {4, 8, 15, 16, 23, 43};

  luckyNums[9] = 19;

  cout << luckyNums[9] << endl;
  return 0;
}