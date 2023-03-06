#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;
// // ************************************
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

int SumArrayElements(int arr[100], int arrLength)
{
  int SumArray = 0;
  for (int i = 0; i < arrLength; i++)
  {
    SumArray += arr[i];
  }
  return SumArray;
}
float AverageArrayElements(int arr[100], int arrLength)
{
  return (float) SumArrayElements(arr, arrLength)/arrLength;
}
void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
   arrDestination[i] = arrSource[i];
  }
  
}
// // ************************************
// // ************************************
int main()
{
  srand((unsigned)time(NULL));
  cout << "*************************" << endl;
  //// ************************************
  int arr[100], arrLength;
  ReadArray(arr, arrLength);

  cout << "Array Element(s) " << endl;
  PrintArray(arr, arrLength);

  cout << "\nSum Array Elements" << endl;
  cout << SumArrayElements(arr, arrLength) << endl;
   //// ************************************
  cout << "Average Array Elements" << endl;
  cout << AverageArrayElements(arr, arrLength) << endl;
   //// ************************************
int arr2[100];
CopyArray(arr, arr2,arrLength);
cout << "Array 2 elements after copy:\n";
PrintArray(arr2, arrLength); 
cout<< endl;
  cout << "*************************" << endl;
  return 0;
}