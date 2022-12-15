#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum)
{
  string dayName;

  // string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  // int l = days.length();

  // if (dayNum >= l)
  // {
  //   dayName = "Invalid Argument";
  // }
  // else
  // {
  //   dayName = days[dayNum];
  // }

  switch (dayNum)
  {
  case 0:
    dayName = "Sunday";
    break;
  case 1:
    dayName = "Monday";
    break;
  case 2:
    dayName = "Tuesday";
    break;
  case 3:
    dayName = "Wednesday";
    break;
  case 4:
    dayName = "Thursday";
    break;
  case 5:
    dayName = "Friday";
    break;
  case 6:
    dayName = "Saturday";
    break;
  default:
    dayName = "Invalid Argument";
    break;
  }

  return dayName;
}

int main()
{
  int num = 0;

  string dayName = getDayOfWeek(num);
  cout << dayName << endl;

  return 0;
}