#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;
// ************************************
string readMyName()
{
  string myName;
  cout << "Enter your name?" << endl;
  cin.ignore(1, '\n');
  getline(cin, myName);
  return myName;
}
void printMyName(string myName)
{
  cout << "Your name is : " << myName << endl;
}
// ************************************
enum enType
{
  odd = 1,
  even = 2
};
int readNumber()
{
  int myNumber;
  cout << "Enter a number ?" << endl;
  cin >> myNumber;
  return myNumber;
}
void printNumber(int myNumber)
{
  cout << "Your Number is : " << myNumber << endl;
}
enType checkNumberType(int readNumber)
{
  int result = readNumber % 2;
  if (result == 0)
  {
    return enType::even;
  }
  else
  {
    return enType::odd;
  }
}
void printNumberType(enType numberType)
{
  if (numberType == enType::even)
  {
    cout << "Number Type is Even : " << enType::even << endl;
  }
  else
  {
    cout << "Number Type is Odd : " << enType::odd << endl;
  }
}
//  // ************************************
struct stEmployInfo
{
  int age;
  bool hasDrivingLicense;
  bool hasRecommendation;
};
stEmployInfo employInfo()
{
  stEmployInfo employeeInfo;
  cout << "please enter you age ?" << endl;
  cin >> employeeInfo.age;
  cout << "Do you have a Drive Licensee ?" << endl;
  cin >> employeeInfo.hasDrivingLicense;
  cout << "Do you have Recommendation ?" << endl;
  cin >> employeeInfo.hasRecommendation;
  cout << "age = " << employeeInfo.age << " Drive = " << employeeInfo.hasDrivingLicense
       << " Recommendation = " << employeeInfo.hasRecommendation << endl;
  return employeeInfo;
}
bool accepted(stEmployInfo employeeInfo)
{
  if (employeeInfo.hasRecommendation)
  {
    return true;
  }
  else
  {
    return (employeeInfo.age > 21 && employeeInfo.hasDrivingLicense);
  }
}
void printResult(stEmployInfo employeeInfo)
{
  if (accepted(employeeInfo))
  {
    cout << "Your info is : " << accepted(employeeInfo) << " You are Hired  " << endl;
  }
  else
  {
    cout << "Your info is : " << accepted(employeeInfo) << " You are Rejected  " << endl;
  }
}
int main()
{
  cout << "*************************" << endl;

  // ************************************
  printNumberType(checkNumberType(readNumber()));
  // ************************************
  printMyName(readMyName());
  // ************************************
  printResult(employInfo());
  cout << "*************************" << endl;
  return 0;
}