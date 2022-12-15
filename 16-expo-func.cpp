#include <iostream>

using namespace std;

int power(int baseNum, int powNum)
{
  int result = 1;

  for (int i = 0; i < powNum; i++)
  {
    result *= baseNum;
  }

  return result;
}

int main()
{
  int answer = power(5, 3);

  cout << "Your answer is " << answer << endl;
  return 0;
}