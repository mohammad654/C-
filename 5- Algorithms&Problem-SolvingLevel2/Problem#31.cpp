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

void FillArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    arr[i] = i + 1;
}
void PrintArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << arr[i] << " ";
}

int RandomNumber(int From, int To)
{
  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}
void Swap(int &A, int &B)
{
  int Temp;
  Temp = A;
  A = B;
  B = Temp;
}
void ShuffleArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
  }
}
// *****************

int main()
{ // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));

  int arr[100];
  int arrLength = ReadPositiveNumber("Enter array elements ?");

  FillArray(arr, arrLength);
  cout << "Array Element(s)  " << endl;
  PrintArray(arr, arrLength);

  cout << "\n*******************************" << endl;
  // *******************************
  ShuffleArray(arr, arrLength);
  cout << "Array elements after shuffle:\n";
  PrintArray(arr, arrLength);

  cout << "\n*******************************" << endl;
  // *******************************

  return 0;
}