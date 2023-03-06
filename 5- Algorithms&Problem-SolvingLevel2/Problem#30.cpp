#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;

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
int RandomNumber(int From, int To)
{
  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}

void ReadArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    arr[i] = RandomNumber(1, 100);
}
void PrintArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << arr[i] << " ";
} 

void SumArrayElements(int arr[100], int arr2[100], int arrSum[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    arrSum[i] = arr[i] + arr2[i];
}

// *****************

int main()
{ // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));
  int arr[100], arr2[100], arrSum[100];
  int arrLength = ReadPositiveNumber("How many elements ?\n");
  cout << "Array 1 Element(s) " << endl;
  ReadArray(arr, arrLength);
  PrintArray(arr, arrLength);
  cout << "\nArray 2 Element(s) " << endl;
  ReadArray(arr2, arrLength);
  PrintArray(arr2, arrLength);

  SumArrayElements(arr, arr2, arrSum, arrLength);
  cout << "\nSum Array Elements " << endl;
  PrintArray(arrSum, arrLength);

  cout << "\n*******************************" << endl;
  // *******************************

  cout << "\n*******************************" << endl;
  // *******************************

  return 0;
}