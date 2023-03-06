#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;
int ReadPositiveNumber(int From, int To)
{
  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}

void ReadArray(int arr[100], int &arrLength)
{
  cout << "Enter number of elements:\n";
  cin >> arrLength;
  for (int i = 0; i < arrLength; i++)
    arr[i] = ReadPositiveNumber(1, 100);
}
void PrintArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << arr[i] << " ";
}
void CopyArray(int arr[100], int arr2[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arr2[i] = arr[i];
  }
}
// *****************
enum enPrimNotPrime
{
  Prime = 1,
  NotPrime = 0
};
enPrimNotPrime CheckPrime(int Number)
{
  int M = round(Number / 2);
  // cout << "M = " << M << endl;
  for (int Counter = 2; Counter <= M; Counter++)
  {
    if (Number % Counter == 0)
      return enPrimNotPrime::NotPrime;
  }
  return enPrimNotPrime::Prime;
}
void CopyOnlyPrimeNumbers(int arr[100], int arr2[100], int arrLength, int &arr2Length)
{
  int Counter = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (CheckPrime(arr[i]) == enPrimNotPrime::Prime)
    {
      arr2[Counter] = arr[i];
      Counter++;
    }
  }
  arr2Length = --Counter;
 
}
int main()
{ // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));
  int arr[100], arrLength;
  // Read array
  ReadArray(arr, arrLength);
  cout << "Array Element(s) " << endl;
  PrintArray(arr, arrLength);
  cout << "\n*******************************" << endl;
  // *******************************
  int arr2[100], arr2Length = 0;
  CopyArray(arr, arr2, arrLength);
  cout << "Array 2 elements after copy:\n";
  PrintArray(arr2, arrLength);
  cout << "\n*******************************" << endl;
  // *******************************
  CopyOnlyPrimeNumbers(arr, arr2, arrLength, arr2Length);
  cout << "\nPrime Numbers in Array2:\n";
  PrintArray(arr2, arr2Length);
  return 0;
}