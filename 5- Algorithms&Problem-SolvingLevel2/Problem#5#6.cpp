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
void PrintDigits(int number)
{
  int Reminder = 0;
  int sum = 0;
  while (number > 0)
  {
    Reminder = number % 10;
    number = number / 10;
    sum = sum + Reminder;
    cout << "Reminder " << Reminder << endl;

  }
    cout << "------------------- "<< endl;
      cout << "sum  \t" << sum << endl;
}

// // ************************************
int main()
{
  cout << "*************************" << endl;
  //// ************************************
  PrintDigits(ReadPositiveNumber("Please enter a positive number ? "));
  cout << "*************************" << endl;
  return 0;
}