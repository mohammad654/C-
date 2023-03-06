#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;
// // ************************************
int ReadPositiveNumber(string Message)
{
  int Number = 0;
  do
  {
    cout << Message << endl;
    cin >> Number;
  } while (Number <= 0);
  return Number;
}
// // ************************************
// // ************************************
int main()
{
  cout << "*************************" << endl;
  //// ************************************
 ReadPositiveNumber("Please enter a positive number?");
  cout << "*************************" << endl;
  return 0;
}