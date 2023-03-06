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
void ReadArray(int arr[100], int &arrLength)
{
  cout << "\nEnter number of elements:\n";
  cin >> arrLength;
  cout << "\nEnter array elements: \n";
  for (int i = 0; i < arrLength; i++)
  {
    cout << "Element [" << i + 1 << "] : ";
    cin >> arr[i];
  }
}
void PrintArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << arr[i] << " ";
}
int TimeReapeted(int numberCheck, int arr[100], int arrLength)
{
  int count = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] == numberCheck)
    {
      count++;
    }
  }
  return count;
}
// // ************************************
// // ************************************
int main()
{
  cout << "*************************" << endl;
  //// ************************************

  // ReadPositiveNumber("Please enter a positive number?");
  int arr[100], arrLength, numberCheck;
  ReadArray(arr, arrLength);
  numberCheck = ReadPositiveNumber("Enter the number you want to check: ");

  cout << "\nOriginal array: " << endl;
  PrintArray(arr, arrLength);

  cout << "\nNumber " << numberCheck;

  cout << " is repeated " << TimeReapeted(numberCheck, arr, arrLength) << " time(s)\n";

  cout << "*************************" << endl;
  return 0;
}