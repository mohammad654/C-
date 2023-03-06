#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;
// ************************************
struct stFullName
{
  string firstName;
  string lastName;
};
stFullName myFullName()
{
  stFullName Full;
  cout << "please enter yor first name ?" << endl;
  cin >> Full.firstName;
  cout << "please enter yor last name ?" << endl;
  cin >> Full.lastName;
  return Full;
}
string getFullName(stFullName Full, bool reversed)
{
  string fullName = "";
  if (reversed)
    fullName = "English " + Full.lastName + " " + Full.firstName;
  else
    fullName = "Arabic " + Full.firstName + " " + Full.lastName;
  return fullName;
}
void printFullName(string fullName)
{
  cout << "Full name is = " << fullName << endl;
}
// // ************************************
int readANumber()
{
  int number;
  cout << "Enter a number?" << endl;
  cin >> number;
  return number;
}
float printAllNumber(float Number)
{
  return (float)Number / 2;
}
void printResult(float halfNumber)
{
  cout << "Half of " << halfNumber * 2 << " is " << halfNumber << endl;
}
// // ************************************
enum enPassFail
{
  pass = 1,
  fail = 0
};
int readAMark()
{
  int mark;
  cout << "Enter your mark ?" << endl;
  cin >> mark;
  return mark;
}
enPassFail checkMark(int mark)
{
  if (mark >= 60)
    return enPassFail::pass;
  else
    return enPassFail::fail;
}
void printMarkResult(float mark)
{
  if (checkMark(mark) == enPassFail::pass)
    cout << "Your Mark is : " << mark << " you passed" << endl;
  else
    cout << "Your Mark is : " << mark << " you failed" << endl;
}
// // ************************************
void readNumbers(int &num1, int &num2, int &num3)
{
  cout << "please enter number 1 " << endl;
  cin >> num1;
  cout << "please enter number 2 " << endl;
  cin >> num2;
  cout << "please enter number 3" << endl;
  cin >> num3;
  cout << "Num1 = " << num1 << " Num2 = " << num2 << " Num3 = " << num3 << endl;
}
int sumNumbers(int num1, int num2, int num3)
{
  return num1 + num2 + num3;
}

void printNumbersSum(int total)
{
  cout << "The sum of numbers is " << total << endl;
}
int averageNumbers(int num1, int num2, int num3)
{
  return (float)sumNumbers(num1, num2, num3) / 3;
}
void printNumbersAverage(float average)
{
  cout << "The average of numbers is " << average << endl;
}
// // ************************************
int main()
{
  cout << "*************************" << endl;
  cout << "" << endl;
  // // ************************************
  int num1, num2, num3;
  readNumbers(num1, num2, num3);
  printNumbersSum(sumNumbers(num1, num2, num3));
  printNumbersAverage(averageNumbers(num1, num2, num3));
  // ************************************
  printMarkResult(readAMark());
  // ************************************
  printResult(printAllNumber(readANumber()));
  // ************************************
  printFullName(getFullName(myFullName(), true));
  cout << "*************************" << endl;
  return 0;
}