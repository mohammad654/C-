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
int PrintReversNumber(int number)
{
  int Reminder = 0;
  int Revers = 0;
  while (number > 0)
  {
    Reminder = number % 10;
    number = number / 10;
    Revers = Revers * 10 + Reminder;
  }
  return Revers;
}
void PrintDigits(int number)
{
  int Remainder = 0;
  while (number > 0)
  {
    Remainder = number % 10;
    number = number / 10;
    cout << Remainder << endl;
  }
}
// // ************************************
int main()
{
  cout << "*************************" << endl;
  //// ************************************
  cout << PrintReversNumber(ReadPositiveNumber("Please enter a positive number ? ")) << endl;
  PrintDigits(PrintReversNumber(ReadPositiveNumber("Please enter a positive number ? ")));

  cout << "*************************" << endl;
  return 0;
}