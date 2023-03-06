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
void PrintInvertedNumberPattern(int number)
{
  cout << "\n";
  for (int i = number; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i;
    }
    cout << "\n";
  }
}
void PrintNumberPattern(int number)
{
  cout << "\n";
  for (int i = 1; i <=number; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i;
    }
    cout << "\n";
  }
}
// // ************************************
int main()
{
  cout << "*************************" << endl;
  //// ************************************
  // PrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positive number?"));
  PrintNumberPattern(ReadPositiveNumber("Please enter a positive number?"));
  cout << "*************************" << endl;
  return 0;
}