#include <iostream>

using namespace std;

enum Captain
{
  Avi,
  Sid,
  Robby,
  Sami,
  Jake,
};

int main()
{
  Captain captain = Robby;
  Captain *pCaptain = &captain;

  cout << captain << endl;
  cout << pCaptain << endl;
  return 0;
}