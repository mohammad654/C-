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
int ReversNumber(int number)
{
  int Remainder = 0, number2 = 0;
  while (number > 0)
  {
    Remainder = number % 10;
    number = number / 10;
    number2 = number2 * 10 + Remainder;
 
  }
      cout<<"number "<<number<<endl;
     cout<<"number2 "<<number2<<endl;
  return number2;
}
bool PalindromeNumber(int number)
{
  return number == ReversNumber(number);
}
// // ************************************
int main()
{
  cout << "*************************" << endl;
  //// ************************************

  if (PalindromeNumber(ReadPositiveNumber("Please enter a positive number?")))
    cout << "\nYes , it is a Palindrome number.\n";
  else
    cout << "\nNo , it is NOT a Palindrome number.\n";
  cout << "*************************" << endl;
  return 0;
}