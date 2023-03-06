#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;

enum screenColors
{
  red = 1,
  green = 2,
  blue = 3,
  yellow = 4
};
int main()
{
  cout << "*************************" << endl;

  cout << "color red 1" << endl;
  cout << "color green 2" << endl;
  cout << "color blue 3" << endl;
  cout << "color yellow 4" << endl;
  cout << "Chose a color?" << endl;
  int c;
  screenColors screenColor;
  cin >> c;
  screenColor = (screenColors)c;
  // if (c == screenColors::red)
  // {
  //   system("color 4F");
  // }
  // else if (c == screenColors::green)
  // {
  //   system("color 2F");
  // }
  // else if (c == screenColors::blue)
  // {
  //   system("color 1F");
  // }
  // else
  // {
  //   system("color 6F");
  // }
  switch (screenColor)
  {
  case screenColors::red:
    system("color 4F");
    break;
  case screenColors::green:
    system("color 2F");
    break;
  case screenColors::blue:
    system("color 1F");
    break;
  default:
    system("color 6F");
    break;
  }

  cout << "*************************" << endl;
  return 0;
}