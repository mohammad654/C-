#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;

int RandomNumber(int From, int To)
{
  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}
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

void FillArrayWithKeys(string arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    arr[i] = i;
}

void PrintStringArray(string arr[100], int arrLength)
{
  cout << "\nArray elements:\n\n";
  for (int i = 0; i < arrLength; i++)
  {
    cout << "Array[" << i << "] : ";
    cout << arr[i] << "\n";
  }
  cout << "\n";
}

enum enCharType
{
  SmallLetter = 1,
  CapitalLetter = 2,
  SpecialCharacter = 3,
  Digit = 4
};
char GetRandomCharacter(enCharType CharType)
{
  switch (CharType)
  {
  case enCharType::SmallLetter:
  {
    return char(RandomNumber(97, 122));
    break;
  }
  case enCharType::CapitalLetter:
  {
    return char(RandomNumber(65, 90));
    break;
  }
  case enCharType::SpecialCharacter:
  {
    return char(RandomNumber(33, 47));
    break;
  }
  case enCharType::Digit:
  {
    return char(RandomNumber(48, 57));
    break;
  }
  }
}

int main()
{ // Seeds the random number generator in C++, called onwly once
  srand((unsigned)time(NULL));

  cout << "\n*******************************" << endl;
  string arr[100];
  int arrLength = 0;
  arrLength = ReadPositiveNumber("How many keys do you want to generate?\n");
  PrintStringArray(arr,arrLength);
   cout <<"\nGet Random Character " << GetRandomCharacter(enCharType::CapitalLetter);

  cout << "\n*******************************" << endl;
  // *******************************

  return 0;
}