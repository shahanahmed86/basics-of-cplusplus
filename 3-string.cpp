#include <iostream>

using namespace std;

int main()
{
  string phrase = "Giraffe Academy";
  phrase[0] = 'B';                         // change index value
  int phraseIndex = phrase.find("ffe", 0); // 4
  string subPhrase = phrase.substr(8, 3);  // Aca

  cout << subPhrase << endl;
  return 0;
}