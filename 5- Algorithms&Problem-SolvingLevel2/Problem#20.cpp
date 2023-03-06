#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
#include <cstdlib>
using namespace std;
// // ************************************
int ReadPositiveNumber(int From, int To)
{
  // cout << "Please enter a positive number?" << endl;
  // cin >> To;
  // cout << "Please enter a positive number?" << endl;
  // cin >> From;
  // Function to generate a random number
  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}
// // ************************************
enum enCharType
{
  SamallLetter = 1,
  CapitalLetter = 2,
  SpecialCharacter = 3,
  Digit = 4
};
char GetRandomCharacter(enCharType CharType)
{
  switch (CharType)
  {
    case enCharType::SamallLetter:
    {
      return char(ReadPositiveNumber(97, 122));
      break;
    }
    case enCharType::CapitalLetter:
    {
      return char(ReadPositiveNumber(65, 90));
      break;
    }
    case enCharType::SpecialCharacter:
    {
      return char(ReadPositiveNumber(33, 47));
      break;
    }
    case enCharType::Digit:
    {
      return char(ReadPositiveNumber(48, 57));
      break;
    }
  }
}
// // ************************************
int main()
{
  cout << "*************************" << endl;
  //// ************************************
  // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));

  int randomNumber = ReadPositiveNumber(11, 20);
  cout << "random number " << ReadPositiveNumber(11, 20) << endl;
  cout << "random number " << ReadPositiveNumber(1, 5) << endl;
  cout << "random number " << ReadPositiveNumber(55, 60) << endl;
  cout << "*************************" << endl;
  cout << GetRandomCharacter(enCharType::SamallLetter) << endl;
  cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
  cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
  cout << GetRandomCharacter(enCharType::Digit) << endl;
  cout << "*************************" << endl;
  return 0;
}