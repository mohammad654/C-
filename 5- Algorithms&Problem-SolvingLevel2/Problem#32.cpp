#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;

int RandomNumbers(int From, int To)
{
  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}

void FillArrayRandomNumbers(int arr[100], int &arrLength)
{
  cout << "Enter number of elements:\n";
  cin >> arrLength;
  for (int i = 0; i < arrLength; i++)
    arr[i] = RandomNumbers(1, 100);
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
void CopyArrayInReverseOrder(int arr[100], int arr2[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    arr2[i] = arr[arrLength - 1 - i];
}
// *****************
void FillArrayNumbers(int arr[100], int &arrLength)
{
  cout << "Enter number of elements:\n";
  cin >> arrLength;
  for (int i = 0; i < arrLength; i++)
    arr[i] = i + 1;
}

int main()
{ // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));

  int arr[100], arr2[100], arrLength;
  cout << "\nArray Element(s)  " << endl;
  FillArrayRandomNumbers(arr, arrLength);
  PrintArray(arr, arrLength);
  cout << "\n*******************************" << endl;
  cout << "\nArray 2 Element(s)  " << endl;
  CopyArray(arr, arr2, arrLength);
  PrintArray(arr2, arrLength);
  cout << "\n*******************************" << endl;
  cout << "\nArray 2 elements after copy:\n";
  CopyArrayInReverseOrder(arr, arr2, arrLength);
  PrintArray(arr2, arrLength);
  cout << "\n*******************************" << endl;
  cout << "\nFill Array Numbers  :\n";
  FillArrayNumbers(arr, arrLength);
  PrintArray(arr, arrLength);
  cout << "\n*******************************" << endl;
  cout << "\nArray 2 elements after copy:  :\n";
  CopyArray(arr, arr2, arrLength);
  PrintArray(arr2, arrLength);
    cout << "\n*******************************" << endl;
  cout << "\nArray Reverse Order elements after copy: \n";
  CopyArrayInReverseOrder(arr, arr2, arrLength);
  PrintArray(arr2, arrLength);
  cout << "\n*******************************" << endl;
  // *******************************

  return 0;
}